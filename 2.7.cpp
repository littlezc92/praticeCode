#include <iostream>

using namespace std;

int main(){
	int n=1,sum=0;
	do{
		sum += n++;
	}while(n<=10);
	cout << sum << endl;
	return 0;
}

