#include <iostream>

using namespace std;

float validateQuantity ( void );
float validatePrice ( void );

int main () {
	
	float price, total = 0, quantity;
		
	quantity = validateQuantity();
	
	while ( quantity != 0 ) {
		
		price = validatePrice();
		
		total += price * quantity;
		
		quantity = validateQuantity();
	}
	
	cout<<"Total de la factura: "<<total;
	
	return 0;
}

float validateQuantity() {
		
	int quantityFromUser;
	float quantityFromUserFloat;
	
	cout<<"Ingrese la cantidad del producto  ( 0 para terminar ): ";
	cin>>quantityFromUserFloat;
	
	quantityFromUser = quantityFromUserFloat;
		
	while( quantityFromUserFloat < 0 || ( quantityFromUserFloat - quantityFromUser ) != 0 ) {
		cout<<"\nNO ES UNA CANTIDAD VALIDA"<<endl;
			cout<<"Ingrese la cantidad del producto  ( 0 para terminar ): ";
			cin>>quantityFromUserFloat;
			quantityFromUser = quantityFromUserFloat;
	}
	
	return quantityFromUserFloat;
	
}
float validatePrice() {
	
	float priceFromUser;
	
	cout<<"Ingrese el precio del producto: ";
	cin>>priceFromUser;
	
	while( priceFromUser < 0 ) {
		cout<<"\nNO ES UN PRECIO VALIDO"<<endl;
		cout<<"Ingrese el precio del producto: ";
		cin>>priceFromUser;
	}
	
	return priceFromUser;
	
}
