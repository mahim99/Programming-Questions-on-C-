#include<iostream>
using namespace std;

int main()
{	
	int n;
	cout << "Enter the number of elements: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	const int N = 1e2; //1e6 = 10^6, when used this the program was not running hence used 1e2
	int idx[N];
	
	for(int i=0; i<N; i++){
		idx[i] = -1;
	}
	
	int minidx = INT_MAX;
	
	for(int i=0; i<n; i++){
		if(idx[arr[i]] != -1){
			minidx = min(minidx, idx[arr[i]]);
		}
		else{
			idx[arr[i]] = i;
		}
	}
	
	if(minidx == INT_MAX){
		cout << "-1" << endl;
	}
	else{
		cout << "Index of the first repeating element: " <<minidx + 1 << endl;
	}
	
	return 0;
}
