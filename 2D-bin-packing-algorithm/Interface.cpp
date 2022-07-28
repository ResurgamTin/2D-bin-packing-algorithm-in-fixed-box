#include "Interface.h"

void CBlockLayout::Rank(vector<vector<int>>& bInfo)
{
    // 矩形排版算法
    cout << "排序前" << endl;
    cout << "-------------------------------------------------" << endl;
    PrintBlocks(bInfo);
    SortByMaxside(bInfo);
    cout << "排序后" << endl;
    cout << "-------------------------------------------------" << endl;
    PrintBlocks(bInfo);
}

void CBlockLayout::Fit(int BG_W, int BG_H, vector<vector<int>> bInfo)
{
    C_BG_W = BG_W;
    C_BG_H = BG_H;
    vector<Block*> blocks;
    Node* root = CreateNode(0, 0, BG_W, BG_H);

    // 创建固定矩形块
    for (int i = 0; i < bInfo.size(); i++)
    {
        Block* loopBlock = CreateBlock(bInfo[i][0], bInfo[i][1], bInfo[i][2]);
        blocks.push_back(loopBlock);
    }

    // 将矩形块逐个添加到排版空间（树）中
    for (int j = 0; j < blocks.size(); j++)
    {
        Block* block = blocks[j];
        Node* node = nullptr;
        if (node = findNode(root, block->width, block->height))
        {
            block->fit = splitNode(node, block->width, block->height);
        }
    }

    // 将排版后的结果存储在 CAns 中
    cout << "排版后的坐标和id" << endl;
    cout << "-------------------------------------------------" << endl;
    for (int k = 0; k < blocks.size(); k++)
    {
        if (blocks[k]->fit)
        {
            vector<int> tmp = { blocks[k]->fit->x, blocks[k]->fit->y, blocks[k]->id };
            CAns.push_back(tmp);
            cout << "x:" << blocks[k]->fit->x << " "
                << "y:" << blocks[k]->fit->y << " "
                << "id:" << blocks[k]->id << endl;
        }
        else
        {
            cout << "block" << k << "dont fit in board!" << endl;
        }
    }
}

int CBlockLayout::getX(int id)
{
    for (int i = 0; i < CAns.size(); i++)
    {
        if (CAns[i][2] == id)
        {
            return CAns[i][0];
        }
    }
    return INT_MIN;    // 表示放不下该矩形
}

int CBlockLayout::getY(int id)
{
    for (int i = 0; i < CAns.size(); i++)
    {
        if (CAns[i][2] == id)
        {
            return CAns[i][0];
        }
    }
    return INT_MIN;
}