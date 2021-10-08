#include<iostream>
#include<vector>

using namespace std;

int main() {
    int N, L, H;
    int counter;
    vector<int> stu, score1, score2;
    cin>>N>>L>>H;
    counter = N;
    for (int i = 0;i<N;i++){
        cin >> stu[i]>>score1[i]>>score2[i];
        if(score1[i]<L||score2[i]<L){
            counter--;
        }
    }
}