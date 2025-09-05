cmake_minimum_required(VERSION 3.16...3.26)
project(tvfgo VERSION 0.1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic -std=c++20)
endif()

set (CMAKE_CXX_STANDARD 20)

# path for custom find scripts, use same of libRSF
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE Release)
endif ()

option(ENABLE_VISUAL "Enable visual thirdparty, factors and integrators" OFF)
option(ENABLE_BEACON "Using Beacon for visual processing" OFF)


# find ROS2 dependencies
find_package(NumCpp REQUIRED)
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_components REQUIRED)
find_package(rclcpp_lifecycle REQUIRED)
find_package(yaml_cpp_vendor REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(message_filters REQUIRED)
find_package(pluginlib REQUIRED)
find_package(rmw REQUIRED)
find_package(rmw_implementation_cmake REQUIRED)
find_package(rmw_implementation REQUIRED)


find_package(tf2 REQUIRED)
find_package(tf2_eigen REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(visualization_msgs REQUIRED)
find_package(OpenMP REQUIRED)
find_package(PCL REQUIRED)
find_package(PCAP REQUIRED)
find_package(keyboard_handler REQUIRED)
find_package(pcl_conversions REQUIRED)



#ROS Messages
find_package(std_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(irt_nav_msgs REQUIRED)
find_package(pcl_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(tf2_sensor_msgs REQUIRED)
find_package(boreas_msgs REQUIRED)

# LIOSAM
find_package(lio_sam REQUIRED)
find_package(OpenCV REQUIRED)


# Vision
find_package(OpenCV REQUIRED)
find_package(cv_bridge REQUIRED)
find_package(image_transport REQUIRED)

# find other dependencies
find_package(TBB REQUIRED COMPONENTS tbb tbbmalloc)
find_package(Boost REQUIRED COMPONENTS system)
find_package(Eigen3 3.4.0 REQUIRED NO_MODULE)

# GTSAM
find_package(GTSAM REQUIRED)
find_package(GTSAM_UNSTABLE REQUIRED)
find_package(GTSAMCMakeTools)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

# **************************************************************************** #
# ************************** TimeVarious FGO SETUP ******************************** #
set(TVFGO_PREFIX 
    ${PROJECT_NAME}
    )

# ************************** INCLUDE & LINK ******************************* #
set(TVFGO_ROS_DEP
        "rclcpp"
        "rclcpp_components"
        "rclcpp_lifecycle"
        "std_msgs"
        "sensor_msgs"
        "irt_nav_msgs"
        "message_filters"
        "pluginlib"
        "nav_msgs"
        "PCL"
        "rosbag2_cpp"
        "rosbag2_storage"
        "keyboard_handler"
        "pcl_msgs"
        "cv_bridge"
        "image_transport"
        "pcl_conversions"
        # "boreas_msgs"
)


set(TVFGO_GENERAL_INCLUDE
        ${GTSAM_INCLUDE_DIR}
        ${Boost_INCLUDE_DIR}
        /usr/include/eigen3
        ${PCL_INCLUDE_DIRS}
)


set(TVFGO_INCLUDE
        ${PROJECT_SOURCE_DIR}
        ${CMAKE_CURRENT_LIST_DIR}/third_party
        ${CMAKE_CURRENT_LIST_DIR}/include
        ${ONLINEFGO_GENERAL_INCLUDE}
)

ament_package()


