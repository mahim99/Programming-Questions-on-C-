#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n, originaln;
	cout << "Enter a number: ";
	cin >> n;
	originaln = n;
	
	int sum = 0;
	while(n>0){
		int lastdigit = n%10;
		sum += pow(lastdigit, 3);
		n /= 10;
	}
	
	if(sum == originaln){
		cout << "Entered number is an Armstrong number" << endl;
	}
	else{
		cout << "Entered number is not an Armstrong number" << endl;
	}
	
	return 0;
}
