from setuptools import find_packages, setup
import os
from glob import glob

package_name = 'turtlebot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.launch.py')), 
        (os.path.join('share', package_name, 'urdf'), glob('urdf/*.xacro')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='geonwoo',
    maintainer_email='kjk9226@naver.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'turtlebot_test = turtlebot.Order_client:main',
            'turtlebot_test1 = turtlebot.Kitchen_server:main',
            'send_goal = turtlebot.send_goal:main',
            'pub_topic = turtlebot.pub_topic:main',
            'sub_topic = turtlebot.sub_topic:main',
        ],
    },
)
