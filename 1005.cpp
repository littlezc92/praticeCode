#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int arr[10000];
bool cmp(int a,int b){
    return a > b;
}
int main(){
    int n,t,i;
    int flag = 0;

    cin >> n;
    vector<int> v(n);
    for (i = 0; i < n; i++)
    {
        cin >> t;
        v[i] = t;
        while(t != 1){
            if(t % 2 != 0){
                t = t * 3 + 1;
            }
            t = t / 2;
            if(arr[t] == 1){
                break;
            }
            arr[t] = 1;
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (i = 0; i < n; i++){
        if (arr[v[i]] == 0){
            if (flag == 1){
                cout << " ";
            }
            cout << v[i];
            flag = 1;
        }
    }
    return 0;
}