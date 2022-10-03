//PROBLEMA 2 --- TIPO IMPOSITORIO DE RENTAs
#include <iostream>;

using namespace std;

int main ( void ) {

double renta;
double impositorio;

cout<<"Ingrese su renta anual: ";
cin>>renta;

cout<<"\n=========================\n";
cout<<"TIPO IMPOSITORIO\n";
cout<<"=========================\n";


if ( renta < 10000 ) {
cout<<"Tipo impositorio del 5%\n";
impositorio = 1.05;
} else if ( renta >= 10000 && renta <= 20000 ) {
cout<<"Tipo impositorio del 15%\n";
impositorio = 1.15;
} else if ( renta > 20000 && renta <= 35000 ) {
cout<<"Tipo impositorio del 20%\n";
impositorio = 1.20;
} else if ( renta > 35000 && renta <= 60000 ) {
cout<<"Tipo impositorio del 30%\n";
impositorio = 1.30;
} else if ( renta > 60000 ) {
cout<<"Tipo impositorio del 45%\n";
impositorio = 1.45;
}

cout<<"Monto: $"<<renta * impositorio;

return 0;
}



