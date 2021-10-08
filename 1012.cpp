#include <iomanip>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int num[n];
    int a[5] = {0}, counter[5] = {0},flag;
    /* 使用counter数组是检测有没有出现相应的数，
    而不能直接用0检测 */
    double b;
    flag = 0;
    b = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 5 == 0 && num[i] % 2 == 0)
        {
            a[0] += num[i];
            counter[0]++;
        }
        if (num[i] % 5 == 1)
        {
            a[1] += pow(-1, counter[1]) * num[i];
            counter[1]++;
        }
        if (num[i] % 5 == 2)
        {
            a[2]++;
            counter[2]++;
        }
        if (num[i] % 5 == 3)
        {
            b += num[i];
            counter[3]++;
        }
        if (num[i] % 5 == 4)
        {
            if (a[4] < num[i])
            {
                counter[4]++;
                a[4] = num[i];
            }
        }
    }
    if (counter[3] == 0)
    {
        b = 0;
    }
    else
    {
        b /= counter[3];
    }
    cout.setf(ios::fixed);
    /* if (a1 && a2 && a3 && a4 && a5)
    {
        cout << a1 << " " << a2 << " " << a3 << " " << fixed << setprecision(1) << a4 << " " << a5;
    } 此种方法if线太多，不选择*/
    for (int i = 0; i < 5; i++)
    {
        if (flag == 1)
        {
            cout << " ";
        }
        flag = 1;
        if (i == 3)
        {
            if (counter[i])
            {
                cout << fixed << setprecision(1) << b;
            }
            else
            {
                cout << "N";
            }
        }
        else
        {
            if (counter[i])
            {
                cout << a[i];
            }
            else
            {
                cout << "N";
            }
        }
    }
    return 0;
}