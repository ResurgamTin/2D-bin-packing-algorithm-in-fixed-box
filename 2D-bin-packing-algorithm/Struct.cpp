#include "Struct.h"

Node* CreateNode(int x, int y, int w, int h)
{
    // 创建矩形二叉树结点
    Node* node = new Node;
    node->used = 0;
    node->down = nullptr;
    node->right = nullptr;
    node->parent= nullptr;
    node->x = x;
    node->y = y;
    node->width = w;
    node->height = h;

    return node;
}

Block* CreateBlock(int w, int h, int i)
{
    // 创建待放置的矩形块
    Block* block = new Block;
    block->fit = nullptr;
    block->x = 0;
    block->y = 0;
    block->width = w;
    block->height = h;
    block->id = i;
    
    return block;
}

void PrintBlocks(vector<vector<int>> bInfo)
{
    // 打印所有的矩形块 {x, y, id}
    for (int i = 0; i < bInfo.size(); i++)
    {
        cout << bInfo[i][0] << ", " << bInfo[i][1] << ", " << bInfo[i][2] << endl;
    }
    cout << endl;
}