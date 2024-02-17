#include<iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "Enter four numbers: ";
	cin >> a >> b >> c >> d;
	
	if(a>b){
		if(a>c){
			if(a>d){
				cout << "First number is greatest: " << a << endl;
			}
			else{
				cout << "Fourth number is greatest: " << d <<endl;
			}
		}
	}
	else if(b>c){
		if(b>d){
			cout << "Second number is greatest: " << b << endl;
		}
		else{
			cout << "Fourth number is greatest: " << d << endl;
		}
	}
	else if(c>d){
		cout << "Third number is greatest: " << c << endl;
	}
	else{
		cout << "Fourth number is greatest: " << d << endl;
	}
	
	return 0;
}
