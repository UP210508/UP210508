#include <iostream>

using namespace std;

int showVegetarianIngredients ( void );
int showNoVegetarianIngredients ( void );

int main () {

	int type_of_pizza;
	int ingredient;
	
	cout<<"Desea una pizza vegetaria?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cout<<"Ingrese su respuesta: ";
	cin>>type_of_pizza;
		
	while( type_of_pizza != 1 && type_of_pizza != 2 ) {
		cout<<"\nNo es respuesta valida!"<<endl;
		cout<<"Desea una pizza vegetaria?"<<endl;
		cout<<"1. Si"<<endl;
		cout<<"2. No"<<endl;
		cout<<"Ingrese su respuesta: ";
		cin>>type_of_pizza;
	}
	
	cout<<"\n----------- Elige un ingrediente -----------\n\n";
	
	if ( type_of_pizza == 1 ) {
	
		ingredient = showVegetarianIngredients();
		
		while( ingredient != 1 && ingredient != 2 ) {
			ingredient = showVegetarianIngredients();
		}
		
		cout<<"\n----------- INGREDIENTES DE TU PIZZA -----------\n\n";
		cout<<"\tMozzarella"<<endl;
		cout<<"\tTomate"<<endl; 
		
		switch( ingredient ) {
			case 1:
				cout<<"\tPimiento";
			break;
			case 2:
				cout<<"\tTofu";
			break;
		}
	
	} else {
		
		ingredient = showNoVegetarianIngredients();
		
		while( ingredient != 1 && ingredient != 2 && ingredient != 3) {
			ingredient = showNoVegetarianIngredients();
		}
		
		cout<<"\n----------- INGREDIENTES DE TU PIZZA -----------\n\n";
		cout<<"\tMozzarella"<<endl;
		cout<<"\tTomate"<<endl; 
		
		switch( ingredient ) {
			case 1:
				cout<<"\tPeperoni";
			break;
			case 2:
				cout<<"\tJamon";
			break;
			case 3:
				cout<<"\tSalmon";
			break;
		}
		
	}
	

	return 0;
}

int showVegetarianIngredients () {
	int vegetarianIngredient;
	
	cout<<"INGREDIENTES VEGETARIANOS"<<endl;
	cout<<"\t1. Pimiento"<<endl;
	cout<<"\t2. Tofu"<<endl;
	cout<<"Ingrese su respuesta: ";
	cin>>vegetarianIngredient;
	
	return vegetarianIngredient;
}

int showNoVegetarianIngredients () {
	int noVegetarianIngredient;
	
	cout<<"INGREDIENTES NO VEGETARIANOS"<<endl;
	cout<<"\t1. Peperoni"<<endl;
	cout<<"\t2. Jamon"<<endl;
	cout<<"\t3. Salmon"<<endl;
	cout<<"Ingrese su respuesta: ";
	cin>>noVegetarianIngredient;
	
	return noVegetarianIngredient;
}


