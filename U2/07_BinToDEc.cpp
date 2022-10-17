#include <iostream>

using namespace std;

int main () {
		
	int power = 1, total = 0, number;
	long int binaryNumber;
	float digit;
	
	cout<<"Ingrese un numero binario: ";
	cin>>binaryNumber;
	
	while ( binaryNumber > 0 ) {
		digit = int (binaryNumber) % 10;
		number = power * digit;
		total += number;
		binaryNumber /= 10;
		power *= 2;
	}
	
	cout<<"Decimal: "<<total;
		
	return 0;
}
