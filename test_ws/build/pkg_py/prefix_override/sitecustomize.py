import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/leyla/Desktop/ROBOTICA_P1/Examen_robotica_p1/test_ws/install/pkg_py'
