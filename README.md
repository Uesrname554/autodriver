基本实现园区中基于静态障碍物的自动驾驶
初始速度和初始加速度nan问题还未测试，目前看应该是影响车辆刹停之后不起步的主要原因
目前代码可以重构
决策：基于规则
规划：DP采样和S T规划
控制：基于运动学的LQR
