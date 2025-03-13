from setuptools import find_packages, setup

package_name = 'ex_2'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name +'/launch', ['launch/sensors_launch.py']), # aniadido para el launch
        ('share/' + package_name +'/launch', ['launch/filt_prom.py']), # aniadido para el launch






    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ubuntu',
    maintainer_email='ubuntu@todo.todo',
    description='TODO: Package description',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'pub_s1 = ex_2.pub_s1:main',
            'pub_s2 = ex_2.pub_s2:main',
            'pub_s3 = ex_2.pub_s3:main',
            'sub_filt = ex_2.sub_filt:main',
            'prom = ex_2.prom:main',
        ],
    },
)
