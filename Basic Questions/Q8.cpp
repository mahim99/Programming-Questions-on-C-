#include<iostream>
using namespace std;

int main()
{
	int a;
	cout << "Enter a number: ";
	cin >> a;
	
	if(a%2==0 && a%3==0){
		cout << "The number is divisible by both 2 and 3" << endl;
	}
	else if(a%3==0){
		cout << "The number is divisible by 3" << endl;
	}
	else if(a%2==0){
		cout << "The number is divisible by 2" << endl;
	}
	else{
		cout << "The number is neither divisible by 2 nor 3" << endl;
	}
	
	return 0;
}
