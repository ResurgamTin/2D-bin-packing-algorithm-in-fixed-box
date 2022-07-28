#pragma once
#include "Struct.h"
#include <algorithm>

using std::max;

// 查找判断矩形向右扩大还是向下扩大
Node* findNode(Node* node, int w, int h);

// 放入当前矩形，并拆分该空矩形
Node* splitNode(Node* node, int w, int h);

// 矩形排版算法
bool cmpByMaxside(vector<int> a, vector<int> b);
void SortByMaxside(vector<vector<int>>& bInfo);