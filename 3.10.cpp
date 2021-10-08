#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    int factor; //x，y的因子
    while (y > 0)
    {
        factor = x % y;
        x = y;
        y = factor;
    }
    return x;
}

int main()
{
    int x, y, mFactor;
    cout << "请输入两个整数" << endl;
    cin >> x >> y;
    mFactor = gcd(x, y);
    cout << "最小公因数为" << mFactor << endl;
    mFactor == 0 ? mFactor = 1 : 1; //判断公因子是否为0；
    cout << "最小公倍数为" << (y / mFactor) * x << endl;
    return 0;
}