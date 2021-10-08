//FIXME:有一处错误

#include <iostream>

#include <queue>

using namespace std;

int main()
{
    int flag = 0;
    int index, ratio;
    int r_index, r_ratio;
    queue<int> x, n;
    while (cin >> index >> ratio)
    {
        n.push(ratio);
        x.push(index);
    }
    while (!n.empty())
    {
        r_index = x.front() * n.front();
        if (x.front() == 0 && n.front() == 0) //零多项式特殊考虑
        {
            r_ratio = 0;
            if (flag == 1)
            {
                cout << " ";
            }
            flag = 1;
            cout << r_index << " " << r_ratio;
        }
        else if (r_index != 0)
        {
            r_ratio = n.front() - 1;
            if (flag == 1)
            {
                cout << " ";
            }
            flag = 1;
            cout << r_index << " " << r_ratio;
        }
        x.pop();
        n.pop();
    }
    return 0;
}