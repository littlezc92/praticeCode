#include <iostream>
using namespace std;

bool Isprime(int &n){
    for (int i = 2; i * i <= n;i++){//注意i的方要小于等于n；不然判断不了平方数
        if(n%i ==0){
            return false;
        }
    }
    return true;
}
int main(){
    int N;
    cin >> N;
    if(Isprime(N))
        cout << "N"<<" "<<"is a prime"<<endl;
    else
        cout << N<<" "<<"is not a prime"<<endl;
    return 0;
}