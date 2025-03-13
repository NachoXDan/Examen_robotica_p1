import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32   # float64????
#from my_package.msg import Filtered  # Asegúrate de poner el nombre correcto de tu paquete
from ucb_interface.msg import Filtered


class NodoFiltrador(Node):

    def __init__(self):
        super().__init__('nodo_filtrador')
        
        # Inicializamos las variables para los valores de los sensores
        self.valor_s1 = None
        self.valor_s2 = None
        self.valor_s3 = None

        # Suscriptores a cada sensor
        self.sub_s1 = self.create_subscription(Float32, 'sensor_1', self.callback_sensor_1, 10)
        self.sub_s2 = self.create_subscription(Float32, 'sensor_2', self.callback_sensor_2, 10)
        self.sub_s3 = self.create_subscription(Float32, 'sensor_3', self.callback_sensor_3, 10)

        # Publicador del promedio
        self.publisher = self.create_publisher(Filtered, 'filtered_sensor', 10) #usamos la interfaz creada

        time_period = 1.5
        self.timer = self.create_timer(time_period, self.timer_callback)

    def callback_sensor_1(self, msg):
        self.valor_s1 = msg.data
        self.get_logger().info(f'Sensor 1: {msg.data:.1f}')

    def callback_sensor_2(self, msg):
        self.valor_s2 = msg.data
        self.get_logger().info(f'Sensor 2: {msg.data:.1f}')

    def callback_sensor_3(self, msg):
        self.valor_s3 = msg.data
        self.get_logger().info(f'Sensor 3: {msg.data:.1f}')

    def timer_callback(self):
        promedio = round((self.valor_s1 + self.valor_s2 + self.valor_s3) / 3, 1)
        msg = Filtered()
        msg.prom = promedio  # Asignar promedio al mensaje
        self.publisher.publish(msg)
        self.get_logger().info(f'Promedio de los sensores: {msg.prom:.1f}')


def main(args=None):
    rclpy.init(args=args)
    nodo = NodoFiltrador()
    rclpy.spin(nodo)
    nodo.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
