#include<iostream>
using namespace std;

int main()
{
	int n, s;
	cout << "Enter the size of the array and the value of S: ";
	cin >> n >> s;
	
	int arr[n];
	cout << "Enter the elements of the array: ";
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int i=0, j=0, st=-1, en=-1, sum=0;
	
	while(j<n && sum+arr[j] <= s){
		sum += arr[j];
		j++;
	}
	
	if(sum == s){
		cout << i+1 << " " << j << endl; // i+1 becoz question was starting index from 1.
		return 0;
	}
	
	while(j<n){
		sum += arr[j];
		while(sum > s){
			sum -= arr[i];
			i++;
		}
		if(sum == s){
			st = i+1;
			en = j+1;
			break;
		}
		j++;
	}
	
	cout << st << " " << en << endl;
	
	return 0;
}
