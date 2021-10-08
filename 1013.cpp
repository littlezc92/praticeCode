#include<iostream>

using namespace std;
const int MAX = 1000001;
int isPrime(int n){
    if(n<=3)
        return n > 1;
    for (int i = 2; i * i <= n;i++){
        if(n%i==0)
            return false;
    }
    return true;
}
int prime[MAX], pNum;
bool p[MAX] = {0};//false为素数
void init(){
    for (int i = 2; i < MAX;i++){//从2开始为素数筛选
        if(p[i]==false){
            prime[pNum++] = i;
            for (int j = i + i;j<MAX;j+=i){
                p[j] = true;
            }
        }
    }
}
int main() {
    int M, N;
    int flag = 0,counter = 0;
    cin >> M >> N;
    init();
    for (int i = M; i <= N; i++)
    {
        if(flag==1){
            cout << " ";
        }
        flag = 1;
        cout << prime[i - 1];
        counter++;
        if(counter%10==0&&counter!=0){//0的时候避免输出换行
            cout << "\n";
            flag = 0;
        }
    }
}