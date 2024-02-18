#include<iostream>
using namespace std;

int main()
{
	int pocketmoney, count, temp, count2;
	count = 0;
	cout << "Enter pocketmoney: ";
	cin >> pocketmoney;
	temp = pocketmoney;
	
	cout << "Can go out on: " << endl;
	for(int i=1; i<=30; i++){
		if(i%2==0){
			continue;
		}
		cout << i << " ";
		pocketmoney -= 500;
		count++;
	}
	cout << endl << "User can go out for a total of: " << count <<" days, given their pocketmoney is: "<< temp << endl;
	
	cout << endl << "If the user goes out on every possible date then, they can go out on: " << endl;
	for(int i=1; i<=30; i++){
		if(i%2==0){
			continue;
		}
		if(temp==0){
			cout << endl << "User can go out for " << count2 << " days and cannot go out from date " << i << " as pocketmoney is over!" << endl;
			break;
		}
		cout << i << " ";
		temp -= 500;
		count2++;
	}

	return 0;
}
