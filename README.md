## 第二次软工结对编程作业
### 一、搭建环境
在运行之前请确保自己的已安装以下：
Visual Studio Code
### 二、运行代码
#### 1.生成数据集
文件：data_set.c
使用：运行data_set.c后，会在C:/Users/lenovo中生成五门课程的CSV文件，每一个文件分别对应该课程的学生姓名学号，绩点以及出勤情况，其中1表示出席该次课程，0表示缺席该次课程

![image](https://github.com/llj032002426/calltheroll/blob/main/csvflie.png)
#### 2.运行结果
文件：result.c
使用：运行result.c后，输入想要点名的课程名字，分别有软件工程、数据库、概率论、图形学、接口技术、输出E值
![image](https://github.com/llj032002426/calltheroll/blob/main/picture_result.png)
### 三、算法
![image](https://raw.githubusercontent.com/llj032002426/calltheroll/main/E_value.png)
根据对评价指标E值的计算，算出五门课程有效点名次数和总请求数，其中五门课程有效点名次数为每门课程每次上课中点名到的学生缺席过该课程的一门课，视为一次有效点名；而总请求次数为五门课程总的点名次数。算法中先根据学生的绩点情况找出那5-8个缺席了该门课程80%次课的学生，导出所有学生的出勤情况，再根据出勤情况计算出E值
