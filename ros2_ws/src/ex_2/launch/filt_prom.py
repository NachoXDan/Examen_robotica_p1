from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        # Nodo Filtrador
        Node(
            package='ex_2',
            executable='sub_filt',
            name='filtrador'
        ),
        # Nodo del prom
        Node(
            package='ex_2',
            executable='prom',
            name='promedio5'
        ),
    ])
