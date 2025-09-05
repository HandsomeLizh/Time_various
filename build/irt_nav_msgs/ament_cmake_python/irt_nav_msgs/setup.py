from setuptools import find_packages
from setuptools import setup

setup(
    name='irt_nav_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('irt_nav_msgs', 'irt_nav_msgs.*')),
)
