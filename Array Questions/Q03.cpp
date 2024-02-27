#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
	int st = 0;
	int en = n;
	while(st <= en){
		int mid = (st+en)/2;
		
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			en = mid - 1;
		}
		else{
			st = mid+1;
		}
	}
	return -1;
}
// The array should be in sorted order.
int main()
{
	int n, key;
	cout << "Enter the size of the array: ";
	cin >> n;
	
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	cout << "Enter the value to be searched: ";
	cin >> key;
	
	cout << binarySearch(arr, n, key) << endl;
	
	return 0;
}
