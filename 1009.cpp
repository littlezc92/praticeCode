/* #include<iostream>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack<string> v;
    string str;
    int flag = 0;
    while(cin >> str){
        v.push(str);
    }
    while(!v.empty()){
        if (flag == 1)
        {
            cout << " ";
        }
        cout << v.top();
        v.pop();
        flag = 1;
    }
    return 0;
} */
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main() {
    stack<string> v;
    string s;
    while(cin >> s) v.push(s);
    cout << v.top();
    v.pop();
    while(!v.empty()) {
        cout << " " << v.top();
        v.pop();
    }
    return 0;
}