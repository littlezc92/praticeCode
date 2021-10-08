#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* int n, m, flag = 0;
    cin >> n >> m;
    m = m % n;
    int a[100];
    for (int i = 100 - n; i < 100; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= m; i++)
    {
        a[100 - n - i] = a[100 - i];
    }
    for (int i = 100 - n - m; i < 100 - m; i++)
    {
        if (flag == 1)
        {
            cout << " ";
        }
        cout << a[i];
        flag = 1;
    }
    return 0; */
    int n, m,flag =0;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    m = m % n;
    if(m!=0){
        reverse(a.begin(), a.end());
        reverse(a.begin(),a.begin()+m);
        reverse(a.begin()+m,a.end());
    }
    for (int i = 0; i < n; i++)
    {
        if (flag == 1)
        {
            cout << " ";
        }
        cout << a[i];
        flag = 1;
    }
    return 0;
}