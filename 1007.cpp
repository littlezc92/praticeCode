#include <iostream>
#include <math.h>

using namespace std;

bool isPrime(int m)
{
    if (m <= 3)
    {
        return m > 1;
    }
    for (int i = 2; i <= sqrt(m); i++)
    {
        if (m % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    int counter = 0;
    cin >> n;
    if (n < 3)
    {
        cout << 0;
    }
    else
    {
        for (int i = 3; i <= n; i++) //必须是小于等于，否则不包含本身的素数
        {
            if (i % 2 == 0 && i != 2)
            {
                continue; //跳出此次循环即可
            }
            else
            {
                if (isPrime(i - 2) && isPrime(i))//防止溢出采用减
                {
                    counter++;
                }
            }
        }
        cout << counter;
    }
    return 0;
}
