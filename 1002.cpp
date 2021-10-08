#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    cin >> s;
    string pinyin[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    int sum = 0,i = 0;
    for(i = 0;i < s.length(); i++){
        sum +=(s[i] - '0');
    }
    string num = to_string(sum);
    for(i = 0;i < num.length();i++){
        if(i != 0){
            cout << " ";
        }
        cout << pinyin[num[i]-'0'];
    }
    return 0;
}