
#include <iostream>

using namespace std;

int main () {

double score;

// Mostrar al usuario las opaciones que tiene
cout<<"\n************** POSIBLES PUNTUACIONES ****************\n";
cout<<"\t0.0\n";
cout<<"\t0.4\n";
cout<<"\t0.6 o mas\n";
cout<<"*****************************************************\n";

// Obtener la puntuación
cout<<"Ingrese su puntuacion: ";
cin>>score;

// Validar la puntuación ingresada 
while( score < 0 || ( score > 0 && score < 0.4) || (score > 0.4 && score < 0.6) ) {
cout<<"\nPuntuacion no valida\n";
cout<<"Ingrese su puntuacion: ";
cin>>score;
}

// Mostrar nivel
cout<<"\n====================\n";
cout<<"NIVEL DE RENDMIENTO\n";
cout<<"====================\n\n";

if ( score == 0.0 ) {
cout<<"Inaceptable\n";
} else if ( score == 0.4 ){
cout<<"Aceptable\n";
} else if ( score >= 0.6 ) {
cout<<"Meritorio\n";
}

// Mostrar dinero obtenido
cout<<"Dinero a recibir: "<<score * 2400<<endl;


return 0;
}
