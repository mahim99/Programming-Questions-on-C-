#include<iostream>
using namespace std;

int main()
{
	int a, b;
	char ch;
	cout << "Enter two numebers: ";
	cin >> a >> b;
	cout << "Enter the operation you want to perform (+, -, *, /): ";
	cin >> ch;
	
	switch(ch){
		case '+':
			cout << "The sum is: " << a+b << endl;
			break;
			
		case '-':
			cout << "The differnce is: " << a-b << endl;
			break;
		
		case '*':
			cout << "The product is: " << a*b << endl;
			break;
		
		case '/':
			cout << "The quotient is: " << a/b << endl;
			break;
		
		default:
			cout << "Enter a valid operation" << endl;
			break;
	}
	
	return 0;
}
