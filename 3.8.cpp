#include <iostream>
using namespace std;
float transformTem(float T)
{
    return 5 / 9.0 * (T - 32);
}
int main()
{
    float F;
    cout << "����һ�������¶�" << endl;
    cin >> F;
    cout << "C=" << transformTem(F) << endl;
    return 0;
}