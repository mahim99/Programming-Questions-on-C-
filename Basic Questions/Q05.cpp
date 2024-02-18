#include<iostream>
using namespace std;

int main()
{
	int n, i;
	cout << "Enter the number: ";
	cin >> n;
	
	for(i=2; i<n; i++){
		if(n%i==0){
			cout << "The number " << n << " is not prime." << endl;
			break;
		}
	}
	
	if(i==n){
		cout << "The number " << n << " is prime" << endl;
	}
	
	return 0;
}
