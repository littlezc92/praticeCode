#include<iostream>
#include<string>

using namespace std;

int main(){
    string StudentName, StudentNumber,MaxName,MinName,MaxNumber,MinNumber;
    int StudentGrade;
    int MaxGrade = -1, MinGrade = 101;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        cin >> StudentName >> StudentNumber >> StudentGrade;
        if(MaxGrade < StudentGrade){
            MaxGrade = StudentGrade;
            MaxName = StudentName;
            MaxNumber = StudentNumber;
        }
        if(MinGrade > StudentGrade){
            MinGrade = StudentGrade;
            MinName = StudentName;
            MinNumber = StudentNumber;
        }
    }
    cout << MaxName <<" "<< MaxNumber << endl;
    cout << MinName <<" "<< MinNumber;
    return 0;
}