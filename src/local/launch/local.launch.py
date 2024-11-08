from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    """launch内容描述函数, 由ros2 launch 扫描调用"""
    local_trajs_node = Node(
        package = "local",  #package Name
        executable = "local_trajs_node",  #executable file Name
        output='screen'
    )
    # gps_node = Node(
    #     package = "gps",  #package Name
    #     node_executable = "gps_node",  #executable file Name
    #     output='screen'
    # )
    # global_path_node = Node(
    #     package = "global",  #package Name
    #     node_executable = "global_path_node",  #executable file Name
    #     output='screen'
    # )
    # 创建LaunchDescription对象launch_description,用于描述launch文件
    launch_description = LaunchDescription(
        [local_trajs_node]
    )
    #返回让ROS2根据launch描述执行节点
    return launch_description