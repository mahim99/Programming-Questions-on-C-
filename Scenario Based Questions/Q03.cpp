#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	
	int arr[n+1];
	arr[n] = -1;
	cout << "Enter N integers: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	if(n == 1){
		cout << "1" << endl;
		return 0;
	}
	
	int ans = 0;
	int mx = -1;
	for(int i=0; i<n; i++){
		if(arr[i]>mx && arr[i]>arr[i+1]){
			ans++;
		}
		mx = max(mx, arr[i]);
	}
	
	cout << ans << endl;
	
	return 0;
}
