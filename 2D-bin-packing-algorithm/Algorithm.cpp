#include "Algorithm.h"

Node* findNode(Node* root, int w, int h)
{
    if (root->used == 1)
    {
        Node* rightNode = findNode(root->right, w, h);
        Node* downNode = findNode(root->down, w, h);
        if (rightNode)
        {
            return rightNode;
        }
        if (downNode)
        {
            return downNode;
        }
    }
    else if ((w <= root->width) && (h <= root->height))
    {
        return root;
    }
    else
    {
        return nullptr;
    }
}

Node* splitNode(Node* node, int w, int h) {
    Node* down = CreateNode(node->x, node->y + h, node->width, node->height - h);

    Node* right = CreateNode(node->x + w, node->y, node->width - w, h);

    node->used = 1;
    node->width = w;
    node->height = h;
    node->right = right;
    node->down = down;

    return node;
}

bool cmpByMaxside(vector<int> a, vector<int> b)
{
    return max(a[0], a[1]) > max(b[0], b[1]);
}

void SortByMaxside(vector<vector<int>>& bInfo)
{
    sort(bInfo.begin(), bInfo.end(), cmpByMaxside);
}