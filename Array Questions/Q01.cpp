#include<iostream>
#include<climits>
using namespace std;

int main()
{
	int n;
	cout << "Enter the size of the array: ";
	cin >> n;
	
	int arr[n];
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int minN = INT_MAX;
	int maxN = INT_MIN;
	
	for(int i=0; i<n; i++){
		maxN = max(maxN, arr[i]);
		minN = min(minN, arr[i]);
	}
	
	cout << "Maximum element is: " << maxN << endl;
	cout << "Minimum element is: " << minN << endl;
	
	return 0;
}
