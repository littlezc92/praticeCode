#include <iostream>
using namespace std;

int gcd(int x, int y)
{
    int factor; //x��y������
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
    cout << "��������������" << endl;
    cin >> x >> y;
    mFactor = gcd(x, y);
    cout << "��С������Ϊ" << mFactor << endl;
    mFactor == 0 ? mFactor = 1 : 1; //�жϹ������Ƿ�Ϊ0��
    cout << "��С������Ϊ" << (y / mFactor) * x << endl;
    return 0;
}