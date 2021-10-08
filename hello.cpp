#include<iostream>

using namespace std;

void function(){
    static int i = 0;
    i++;
    cout << i << endl;
}
int main(){
    int i = 100;
    function();
    i++;
    function();
    cout <<"hello world"<<endl;
}