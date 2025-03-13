# este su

import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MiNodoPublicador(Node):

    def __init__(self):
        super().__init__('pub')  # Asegúrate de pasar el nombre del nodo aquí
        self.publisher = self.create_publisher(String, 'hola', 10)  # Creación del tópico
        time_period = 0.5  # Definir el tiempo de publicación
        self.timer = self.create_timer(time_period, self.timer_callback)  # Instancia del timer
        self.i = 0

    def timer_callback(self):
        msg = String()
        msg.data = f'Hola clase UCB: {self.i}'

        self.publisher.publish(msg)
        self.get_logger().info(f'Publicado: "{msg.data}"')
        self.i += 1

def main(args=None):
    rclpy.init(args=args)
    mi_nodo = MiNodoPublicador()  # Aquí se crea el nodo con el nombre pasado

    rclpy.spin(mi_nodo)  # Ejecuta el nodo hasta que se interrumpa
    mi_nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
