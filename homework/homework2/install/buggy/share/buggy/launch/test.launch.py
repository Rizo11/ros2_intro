from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
import os

def generate_launch_description():

    pub = Node(
            name='pub',
            namespace='',
            package='buggy',
            executable='pub',
            output='screen',
    )
    
    sub = Node(
            name='sub',
            namespace='',
            package='buggy',
            executable='sub',
            output='screen',
    )
    
    ld = LaunchDescription()
    ld.add_action(pub)
    ld.add_action(sub)
    return ld