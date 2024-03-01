#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int mx = INT_MIN;
	for(int i=0; i<n; i++){
		mx = max(mx, arr[i]);
		cout << mx << endl;
	}
	
	return 0;
}
