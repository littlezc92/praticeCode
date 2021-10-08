#include <iostream>

using namespace std;

int main()
{
    int n;
    double a, b, c;//注意范围
    cin >> n;
    int flag[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        if (c - a >= b)
        {
            flag[i] = 0;
        }
        else
        {
            flag[i] = 1;
        }
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (flag[i])
        {
            cout << "Case #" << i + 1 << ": true" << endl;
        }
        else
        {
            cout << "Case #" << i + 1 << ": false" << endl;
        }
    }
    if (flag[n - 1])
    {
        cout << "Case #" << n << ": true";
    }
    else
    {
        cout << "Case #" << n << ": false";
    }
    return 0;
}