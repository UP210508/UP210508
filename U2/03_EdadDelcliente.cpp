#include <iostream>

using namespace std;

int main () {

	int edad; 
	
	cout<<"Ingrese su edad: ";
	cin>>edad;
	
	if ( edad < 4 ) {
		cout<<"\nPuede entrar gratis! :D"<<endl;
	} else if ( edad >= 4 && edad <= 18 ) {
		cout<<"\nDebe pagar $5 :)"<<endl;
	} else {
		cout<<"\nDebe pagar $10 :)"<<endl;
	}
		
}
