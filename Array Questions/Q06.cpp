#include<iostream>
using namespace std;

void selectionSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[i]){
				int temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	
	cout << "Sorted array is: ";
	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
}

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
	
	selectionSort(arr, n);
	
	return 0;
}
