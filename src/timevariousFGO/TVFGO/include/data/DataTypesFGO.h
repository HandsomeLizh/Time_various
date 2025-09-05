#pragma once

#include <shared_mutex>

#include <rclcpp/time.hpp>
#include <rclcpp/rclcpp.hpp>
#include <gtsam/base/Vector.h>
#include <gtsam/base/Matrix.h>
#include <gtsam/navigation/NavState.h>
#include <gtsam/navigation/ImuBias.h>
#include <gtsam/linear/NoiseModel.h>

#include "utils/Constants.h"
#include "DataTypesMeasurement.h"


//struct 和 enum 来定义所有非平凡（non-trivial）的数据类型，为整个项目的C++代码提供了一套统一的、类型安全的“词汇表”。
namespace fgo::data {

  typedef std::array<double, 7> UserEstimation_T;

  enum NoiseModel {
    GAUSSIAN,
    HUBER,
    CAUCHY,
    DCS,
    Tukey,
    GemanMcClure,
    Welsch

  };

  enum GPModelType {
    WNOA,
    WNOJ,
    WNOJFull,
    Singer,
    SingerFull,
  };

  struct Pose {
    //一个简化的 State 版本，只包含位姿、时间戳和对应的协方差。用于一些只需要位姿信息的场合。
    rclcpp::Time timestamp = rclcpp::Time(0, 0, RCL_ROS_TIME);
    gtsam::Pose3 pose;
    // should be a vector with 6 entries
    gtsam::Matrix66 poseVar = (gtsam::Vector6() <<
                                                5.0 / 180 * M_PI, 5.0 / 180 * M_PI, 5.0 / 180 *
                                                                                    M_PI, 5, 5, 10).finished().asDiagonal();

    std::shared_mutex mutex;

    Pose() = default;

    inline Pose &operator=(const Pose &ori) {
      timestamp = ori.timestamp;
      pose = ori.pose;
      poseVar = ori.poseVar;
      return *this;
    }

    Pose(const Pose &ori) {
      timestamp = ori.timestamp;
      pose = ori.pose;
      poseVar = ori.poseVar;
    }
  };

  struct State {
    /*rclcpp::Time timestamp: 该状态对应的时间戳。

    gtsam::NavState state: 一个GTSAM内置的便捷类型，捆绑了位姿（Pose）和速度（Velocity）。

    gtsam::imuBias::ConstantBias imuBias: IMU的偏置。

    gtsam::Vector2 cbd: GNSS接收机的钟差和钟漂。

    gtsam::Vector ddIntAmb: GNSS的整周模糊度。

    gtsam::Vector3 omega: 角速度。

    以及一系列以 ...Var 结尾的成员（如 poseVar, velVar）：这些都是GTSAM中的矩阵类型，代表了对应状态量的协方差（Covariance），即不确定性。

    */
    rclcpp::Time timestamp = rclcpp::Time(0, 0, RCL_ROS_TIME);
    gtsam::NavState state{};
    // should be a vector with 6 entries
    gtsam::Matrix66 poseVar = (gtsam::Vector6() <<
                                                5.0 / 180 * M_PI, 5.0 / 180 * M_PI, 5.0 / 180 *
                                                                                    M_PI, 5, 5, 10).finished().asDiagonal();

    gtsam::Matrix33 velVar = gtsam::I_3x3;    // should be a vector with 6 entries, including omega

    gtsam::imuBias::ConstantBias imuBias;
    gtsam::Matrix66 imuBiasVar = (gtsam::Matrix66() << 0.1 * gtsam::I_3x3, gtsam::Z_3x3,
      gtsam::Z_3x3, 0.01 / 180 * M_PI * gtsam::I_3x3).finished(); // should be a vector with 6 entries acc then gyro

    gtsam::Vector2 cbd{};
    // should be a vector with 2 entries
    gtsam::Matrix22 cbdVar = (gtsam::Matrix22() << 1000, 0, 0, 10).finished();

    gtsam::Vector ddIntAmb = gtsam::Vector1(0);
    gtsam::Matrix ddIntAmbVar = gtsam::I_1x1;

    gtsam::Vector3 omega{};  // We do not concatenate the angular and linear velocity together because they are in different frames
    gtsam::Matrix33 omegaVar = 0.1 / 180 * M_PI * gtsam::I_3x3;

    gtsam::Vector6 accMeasured{};
    gtsam::Matrix66 accVar = 0.05 * gtsam::I_6x6;

    std::shared_mutex mutex;

    State() = default;


    inline State &operator=(const State &ori) {
      timestamp = ori.timestamp;
      state = ori.state;
      poseVar = ori.poseVar;
      velVar = ori.velVar;
      imuBias = ori.imuBias;
      imuBiasVar = ori.imuBiasVar;
      cbd = ori.cbd;
      cbdVar = ori.cbdVar;
      ddIntAmb = ori.ddIntAmb;
      ddIntAmbVar = ori.ddIntAmbVar;
      omega = ori.omega;
      omegaVar = ori.omegaVar;
      accMeasured = ori.accMeasured;
      accVar = ori.accVar;
      return *this;
    }

    State(const State &ori) {
      timestamp = ori.timestamp;
      state = ori.state;
      poseVar = ori.poseVar;
      velVar = ori.velVar;
      imuBias = ori.imuBias;
      imuBiasVar = ori.imuBiasVar;
      cbd = ori.cbd;
      cbdVar = ori.cbdVar;
      ddIntAmb = ori.ddIntAmb;
      ddIntAmbVar = ori.ddIntAmbVar;
      omega = ori.omega;
      accMeasured = ori.accMeasured;
      accVar = ori.accVar;
    }
  };
  //这两个结构体是为连续时间轨迹查询机制服务的。
  struct QueryStateInput {
    //定义了执行一次状态查询需要输入的数据
    gtsam::Pose3 pose;
    gtsam::Vector3 vel;
    gtsam::Vector3 omega;
    gtsam::Vector6 acc;
  };

  struct QueryStateOutput {
    //  定义了执行一次状态查询后返回的结果。其成员 keyIndexI, keyIndexJ, timestampI, timestampJ 等，精确地对应了执行GP内插时所需的两个相邻关键帧状态的信息。
    bool queriedSuccess = false;
    rclcpp::Time timestampCurrent;
    gtsam::Pose3 pose;
    gtsam::Pose3 poseIMUECEF;
    gtsam::Vector3 vel;
    size_t keyIndexI;
    size_t keyIndexJ;
    double timestampI;
    double timestampJ;
    double durationI;
    gtsam::Vector6 accI;
    gtsam::Vector6 accJ;
    bool keySynchronized;
  };

  struct Odom {
    size_t frameIndexCurrent;
    size_t frameIndexPrevious;
    double timestampPrevious;
    double timestampCurrent;
    gtsam::Pose3 poseFromLocalWorld;
    gtsam::Pose3 poseFromECEF;
    gtsam::Pose3 poseToLocalWorld;
    gtsam::Pose3 poseToECEF;
    gtsam::Pose3 poseRelativeECEF;
    gtsam::Vector6 noise;
    QueryStateOutput queryOutputPrevious;
    QueryStateOutput queryOutputCurrent;
  };

  struct OdomResult {
    size_t frameIndexCurrent;
    size_t frameIndexPrevious;
    double timestampPrevious;
    double timestampCurrent;
    size_t keyIndexII;
    size_t keyIndexIJ;
    size_t keyIndexJI;
    size_t keyIndexJJ;
    double timestampII;
    double timestampIJ;
    double timestampJI;
    double timestampJJ;
    double durationII;
    gtsam::Vector6 accII;
    gtsam::Vector6 accIJ;
    gtsam::Vector6 accJI;
    gtsam::Vector6 accJJ;
    double durationJI;
    bool keyISynchronized;
    bool keyJSynchronized;
    gtsam::Pose3 posePrevious;
    gtsam::Pose3 poseCurrent;
    gtsam::Pose3 posePreviousIMUECEFQueried;
    gtsam::Pose3 poseCurrentIMUECEFQueried;

  };


}

