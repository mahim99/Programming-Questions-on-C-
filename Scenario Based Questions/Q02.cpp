#include<iostream>
using namespace std;

int main()
{
//	for main question take test case also as input
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int ans = 2;
	int j = 2;
	int curr = 2;
	int pd = arr[1] - arr[0];
	
	while(j<n){
		if(pd == arr[j] - arr[j-1]){
			curr++;
		}
		else{
			pd = arr[j] - arr[j-1];
			curr = 2;
		}
		ans = max(ans, curr);
		j++;
	}
	
	cout << "The Longest Arithematic Subarray is of lenght: " << ans << endl;
	
	return 0;
}
