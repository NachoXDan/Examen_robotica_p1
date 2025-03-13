import rclpy
from rclpy.node import Node
from ucb_interface.msg import Filtered # para usar la interfaz creada para el tipo de dato/  cambiarlo a float 64?

class NodoMonitorPromedio(Node):

    def __init__(self):
        super().__init__('monitor_promedio')  
        self.subscription = self.create_subscription(Filtered, 'filtered_sensor', self.callback_promedio, 10)# se usa la interzas creada
        #self.subscription

    def callback_promedio(self, msg):
        self.get_logger().info(f'Promedio de los sensores: {msg.prom:.1f}') # "prom" es del nuevo tipo de dato ys e muestra un decimal/ mostrar 2 ??

def main(args=None):
    rclpy.init(args=args)
    nodo_monitor = NodoMonitorPromedio()
    rclpy.spin(nodo_monitor)
    nodo_monitor.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
