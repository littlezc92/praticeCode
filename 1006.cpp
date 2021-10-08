#include<iostream>

using namespace std;

int main(){
    int n, tem;
    int j = 0;
    int a[3];
    cin >> n;
    tem = n;
    for (int i = 0; i < 3; i++)
    {
        a[i] = tem % 10;
        tem /= 10;
    }
    for (int i = 0; i < 3; i++)
    {
        if (i == 0){
            while (a[2 - i]-- != 0)
            {
                cout << "B";
            }
        }
        else if (i == 1){
            while (a[2 - i]-- != 0)
            {
                cout << "S";
            }
        }
        else if (i == 2){
            while (a[2 - i]-- != 0)
            {
                cout << ++j;
            }
        }
    }
}