#include<iostream>
using namespace std;

int main()
{
	int power = 1;
	float r, precision, cir;
	cout << "Enter the radius: ";
	cin >> r;
	cout << "Enter the precision: ";
	cin >> precision;
	cir = 2*3.141592*r;
	
	for(int i=0; i<precision; i++)
	{
		power *= 10;
	}

	int integerPart = static_cast<int>(cir);
	int decimalPart = static_cast<int>((cir - integerPart)*power);
	
	cout << "The circumference with precision " << precision << " is " << integerPart << "." << decimalPart;

	
	return 0;
}
