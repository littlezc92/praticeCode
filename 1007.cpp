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
        for (int i = 3; i <= n; i++) //������С�ڵ��ڣ����򲻰������������
        {
            if (i % 2 == 0 && i != 2)
            {
                continue; //�����˴�ѭ������
            }
            else
            {
                if (isPrime(i - 2) && isPrime(i))//��ֹ������ü�
                {
                    counter++;
                }
            }
        }
        cout << counter;
    }
    return 0;
}
