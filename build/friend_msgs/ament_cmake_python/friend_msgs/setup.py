from setuptools import find_packages
from setuptools import setup

setup(
    name='friend_msgs',
    version='0.2.0',
    packages=find_packages(
        include=('friend_msgs', 'friend_msgs.*')),
)
