<h3 align="center">固定框内二维矩阵装箱算法</h3>

### 1、总体结构

包含 Struct.h（内含矩形二叉树结点和矩形块结构及其处理函数），Algorithm.h（内含矩形块排序及排版算法），Interface.h（内含接口部分，即供用户使用的 Rank，Fit，getX，getY 函数，包含在 CBlockLayout 接口类中）。

使用时只要包含 Interface.h 头文件即可。

### 2、函数说明

#### 1、Rank 函数

``void Rank(vector<vector<int>>& bInfo);``

输入：

bInfo：二维数组，其中每个元素表示不同矩形块的 { width, hegiht, id }

功能：

将每个矩形块以最大边降序排序。

#### 2、Fit 函数

``void Fit(int BG_W, int BG_H, vector<vector<int>> bInfo);``

输入：

BG_W：背景矩形块的宽

BG_H：背景矩形块的高

bInfo：同上，可以是排好序的二维数组，也可以是指定顺序的二维数组。

功能：

将按照一定算法（以最大边降序排序的顺序，或者指定顺序）从左上角开始排版后的结果存储在 CAns 中，CAns 是一个 n*3 的二维数组，其中 n 个元素分别表示不同矩形块的 {x, y, id}。

#### 3、getX 函数

``int getX(int id);``

输入：

id：矩形块的 id 值

返回：

矩形块应放置的 x 坐标。

#### 4、getX 函数

``int getY(int id);``

输入：

id：矩形块的 id 值

返回：

矩形块应放置的 y 坐标。

==注：(x, y) 为矩形块左上角点的坐标。==