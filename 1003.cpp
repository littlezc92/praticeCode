//FIXME:没搞定
#include<iostream>
#include<string>

using namespace std;

bool judge(string s){
    int i, j;
    for (i = 0; i < s.length();i++){
        if(s[i] != 'P' && s[i] != 'A' && s[i] != 'T'){
            return false;
        }
    }
    int flagL = 0, flagR = 0;
    for (i = 0; i < s.length();i++){
        if(s[i] != 'P'){
            switch (s[i])
            {
            case 'A':
                flagL++; /* code */
                break;
            
            default:
                break;
            }
        }
    }
}
int main(){
    string str[10];
    char re;
    int num,i,j;
    cin >> num;
    i = 0;
    j = num;
    while(j--){
        cin >> str[i++];
    }
    
}