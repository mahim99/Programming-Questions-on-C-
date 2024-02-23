#include<iostream>
using namespace std;

int fact(int x){
	int pd = 1;
	for(int i=2; i<=x; i++){
		pd *= i;
	}
	return pd;
}

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	for(int i=0; i<n; i++){
		for(int j=0; j<=i; j++){
			cout << fact(i)/(fact(j)*fact(i-j)) << " ";
		}
		cout << endl;
	}
	
	return 0;
}
