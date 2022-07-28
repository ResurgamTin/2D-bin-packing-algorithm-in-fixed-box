#pragma once
#include "Algorithm.h"
#include "Struct.h"

class CBlockLayout
{
public:
    CBlockLayout() {}
    ~CBlockLayout() {}

    void Rank(vector<vector<int>>& bInfo);    // 矩形排版算法

    void Fit(int BG_X, int BG_Y, vector<vector<int>> bInfo);    // 逐个插入二叉树

    int getX(int id);    // 获取指定 id 的矩形块的 x 坐标
    int getY(int id);    // 获取指定 id 的矩形块的 y 坐标

private:
    vector<vector<int>> CAns;    // 排版结果
                                 // CAns 是一个 n*3 的二维数组
                                 // 其中 n 个元素分别表示不同矩形块的 {x, y, id}

    int C_BG_W{ 0 };    // 背景矩形块的宽
    int C_BG_H{ 0 };    // 背景矩形块的高
};
