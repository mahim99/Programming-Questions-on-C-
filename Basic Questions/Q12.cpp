#include<iostream>
using namespace std;

/*    *
     **
	***
*/

int main()
{
	int n;
	cout << "Enter the value for n: ";
	cin >> n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){ //since something is getting printed whether a space or a star.
			if(j<=n-i){
				cout << " ";
			}
			else{
				cout << "*";
			}
		}
		cout << endl;
	}
	
	return 0;
}
