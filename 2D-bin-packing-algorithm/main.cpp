#include "Interface.h"

int main()
{
    CBlockLayout Interface;
    vector<vector<int>> bInfo = { {50, 50, 0},
                                  {250, 200, 1},
                                  {500, 200, 2},
                                  {300, 200, 3} };
    Interface.Rank(bInfo);
    Interface.Fit(700, 400, bInfo);

    cout << endl;
    cout << "id为3的矩形块的y坐标为：" << Interface.getY(3) << endl;
    cout << "id为0的矩形块的x坐标为：" << Interface.getX(0) << endl;

    return 0;
}