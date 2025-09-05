from setuptools import find_packages
from setuptools import setup

setup(
    name='boreas_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('boreas_msgs', 'boreas_msgs.*')),
)
