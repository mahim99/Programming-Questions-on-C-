#include<iostream>
using namespace std;

int main()
{
	int n, sum;
	cout << "Enter the number till which you want the sum to be calculated: ";
	cin >> n;
	sum = 0;
	
	for(int i=1; i<=n; i++){
		sum += i;
	}
/* Here we didn't use for(int i=0; i<=n; i++) as this will run (n) iterations whereas above loop runs only (n-1) 
iterations. i=0 loop runs n time becoz we are calculating sum and we have to run till i<=n as we want the last no. (n)
to be added to sum, and since sum=0 so the first iteration(sum = 0+0) in this case becomes useless.*/
	
	cout << "The sum from 0 till " << n << " is: " << sum;
	
	return 0;
}
