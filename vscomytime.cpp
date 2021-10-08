#include <iostream>

using namespace std;

struct MyTimeStruct{
	unsigned int year;
	unsigned int month;
	unsigned int day;
};
int main(){
	MyTimeStruct myTime = {2021,8,8};
	cout << "Please input year:" << endl;
	cin >> myTime.year;
	if(myTime.year<1){
		cout << "Error" << endl;
		do{
			cout << "Please input correct year!" << endl;
			cin >> myTime.year;
		}while(myTime.year < 1);

	}
	cout << "Please input month:" <<endl;
	cin >> myTime.month;
    if(myTime.month > 12 || myTime.month < 1){
		cout << "Error" << endl;
		do{
			cout << "Please input correct month!" << endl;
			cin >> myTime.month;
		}while(myTime.month > 12 || myTime.month < 1);
	}
	cout << "Please input day:" <<endl;
	cin >> myTime.day;
	if(myTime.day > 31 || myTime.day < 1){
		cout << "Error" << endl;
		do{
			cout << "Please input correct day!" << endl;
			cin >> myTime.day;
		}while(myTime.day > 31 || myTime.day < 1);
	}
	cout << "The time is:" << myTime.year <<"/"
	<< myTime.month << "/" << myTime.day <<endl;
}
