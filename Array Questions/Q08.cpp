#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size if the array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int currSum = 0;
	for(int i=0; i<n; i++){
		currSum = 0;
		for(int j=i; j<n; j++){
			currSum += arr[j];
			cout << currSum << endl;
		}
	}
	
	return 0;
}
