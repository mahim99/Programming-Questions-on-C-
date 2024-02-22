#include<iostream>
using namespace std;

int fact(int x){
	int fact = 1;
	for(int i=2; i<=x; i++){
		fact *= i;
	}
	return fact;
}

int main()
{
	int n, r;
	cout << "Enter the value of n: ";
	cin >> n;
	
	cout << "Enter the value of r: ";
	cin >> r;
	
	cout << "The nCr value is: " << fact(n)/(fact(r)*fact(n-r)) << endl;
	
	return 0;
}
