#include <iostream>

using namespace std;

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

cout<<"INGREDIENTES VEGETARIANOS"<<endl;
cout<<"\t1. Pimiento"<<endl;
cout<<"\t2. Tofu"<<endl;
cout<<"Ingrese su respuesta: ";
cin>>ingredient;

while( ingredient != 1 && ingredient != 2 ) {
cout<<"\nNo es respuesta valida!"<<endl;
cout<<"\nINGREDIENTES VEGETARIANOS"<<endl;
cout<<"\t1. Pimiento"<<endl;
cout<<"\t2. Tofu"<<endl;
cout<<"Ingrese su respuesta: ";
cin>>ingredient;
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
cout<<"INGREDIENTES NO VEGETARIANOS"<<endl;
cout<<"\t1. Peperoni"<<endl;
cout<<"\t2. Jamon"<<endl;
cout<<"\t3. Salmon"<<endl;
cout<<"Ingrese su respuesta: ";
cin>>ingredient;

while( ingredient != 1 && ingredient != 2 && ingredient != 3) {
cout<<"\nINGREDIENTES NO VEGETARIANOS"<<endl;
cout<<"\t1. Peperoni"<<endl;
cout<<"\t2. Jamon"<<endl;
cout<<"\t3. Salmon"<<endl;
cout<<"Ingrese su respuesta: ";
cin>>ingredient;
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
