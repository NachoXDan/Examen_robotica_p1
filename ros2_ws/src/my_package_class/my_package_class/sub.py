# NODO SUSCRIPTOR

# mismo topico para comunicarse


import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class MiSubscriptor(Node):

    def __init__(self):
        super().__init__('sub')  # Asegúrate de pasar el nombre del nodo aquí
        self.subscription = self.create_subscription(String, 'hola', self.listener_callback,10) 
        self.subscription


    def listener_callback(self,msg):

        self.get_logger().info(f'Recived: "%s"' %msg.data)


def main(args=None):
    rclpy.init(args=args)
    mi_nodo = MiSubscriptor()  # Aquí se crea el nodo con el nombre pasado

    rclpy.spin(mi_nodo)  # Ejecuta el nodo hasta que se interrumpa
    mi_nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
