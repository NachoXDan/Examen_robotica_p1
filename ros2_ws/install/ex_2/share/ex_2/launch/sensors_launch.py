from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Nodo 1
        Node(
            package='ex_2',
            executable='pub_s1',
            name='sensor_1'
        ),
        # Nodo 2
        Node(
            package='ex_2',
            executable='pub_s2',
            name='sensor_2'
        ),
        # Nodo 3
        Node(
            package='ex_2',
            executable='pub_s3',
            name='sensor_3'
        ),
    ])
