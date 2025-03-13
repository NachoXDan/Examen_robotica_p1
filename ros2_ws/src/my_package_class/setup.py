from setuptools import find_packages, setup

package_name = 'my_package_class'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
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
            'sub = my_package_class.sub:main',
            'pub = my_package_class.pub:main',
            'custom_sub = my_package_class.sub_custom_msg:main',
            'custom_pub = my_package_class.pub_custom_msg:main',


        ],
    },
)
