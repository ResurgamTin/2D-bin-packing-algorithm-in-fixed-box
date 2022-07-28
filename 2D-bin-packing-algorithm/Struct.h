#pragma once
#include<vector>
#include<iostream>

using namespace std;

struct Node
{
    struct Node* parent;
    struct Node* down;    // down 是矩形的下边的区域
    struct Node* right;   // right 是矩形的右边的区域
    int used;    // 该矩形空间是否被占用
    int width;
    int height;
    int x;
    int y;
};

// 处理矩形结点
Node* CreateNode(int x, int y, int w, int h);

// 待放置的矩形块
struct Block
{
    struct Node* fit;    // 适合该矩形块放置的位置，若为 nullptr 表示位置不够
    int width;
    int height;
    int x;
    int y;
    int id;
};

// 处理矩形块
Block* CreateBlock(int w, int h, int i);
void PrintBlocks(vector<vector<int>> bInfo);