#snsor 1

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32
import random

class MiNodoPublicador(Node):

    def __init__(self):
        super().__init__('pub_s1')  # Nombre del nodo
        self.publisher = self.create_publisher(Float32, 'sensor_1', 10)  # Creación del tópico tipo Float32
        time_period = 1.5  # tiempo entre publicaciones
        self.timer = self.create_timer(time_period, self.timer_callback)  # Instancia del timer

    def timer_callback(self):
        numero = round(random.uniform(0.0, 10.0), 1)  # Número aleatorio
        msg = Float32()
        msg.data = numero  # Asignar el numero al mensaje

        self.publisher.publish(msg)  # Publicar
        self.get_logger().info(f'Publicado: {msg.data:.1f}')  # Log con 1 decimal

def main(args=None):
    rclpy.init(args=args)
    mi_nodo = MiNodoPublicador()
    rclpy.spin(mi_nodo)
    mi_nodo.destroy_node() # destruye el nodo con "control c"
    rclpy.shutdown()

if __name__ == '__main__':
    main()
