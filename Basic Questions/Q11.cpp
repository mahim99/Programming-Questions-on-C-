#include<iostream>
using namespace std;

int main()
{
	int n, fact;
	cout << "Enter a number: ";
	cin >> n;
	fact = 1;
	
	for(int i=2; i<=n; i++){
		fact = fact*i;
	}
	
	cout << "The factorial of the given number is: " << fact << endl;
	
	return 0;
}
