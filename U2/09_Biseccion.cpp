#include <stdio.h>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <windows.h> 

using namespace std;

double evaluateFunction( double ); 
void printLine ( void );

int main () {
	
	system("cls");
	double xi, fxi, xs, fxs, xm, fxm, root;
	double approx = 0.0001;
	bool hasRoot = false;
	int counter = 1;
	
	cout<<"Ingrese valor de xi: ";
	cin >> xi; 
		
	cout<<"Ingrese valor de xs: ";
	cin >> xs; 
	
	cout<<"\n";
	printLine();
	printf("|");
	printf("%15s", "Iteracion");
	printf("%7s", "|");
	printf("%10s", "xi");
	printf("%9s", "|");
	printf("%10s", "xs");
	printf("%9s", "|");
	printf("%10s", "xm");
	printf("%9s", "|");
	printf("%13s", "f(xi)");
	printf("%9s", "|");
	printf("%13s", "f(xm)");
	printf("%9s", "|");
	printf("%18s", "f(xi)f(xm)");
	printf("%9s", "|");
	cout<<"\n";
	printLine();
	
	fxs = evaluateFunction( xs );

	do {
			
		xm = ( xi + xs ) / 2;
		fxi = evaluateFunction ( xi );
		fxm = evaluateFunction ( xm );
		
		if ( fxi * fxs > 0 ) break;  
		
		printf("|");
		printf("%15d", counter);
		printf("%7s", "|");
		printf("%10f", xi);
		printf("%9s", "|");
		printf("%10f", xs);
		printf("%9s", "|");
		printf("\033[0;32m");
		printf("%10f", xm);
		printf("\033[0m");
		printf("%9s", "|");
		printf("%13f", fxi);
		printf("%9s", "|");
		printf("%13f", fxm);
		printf("%9s", "|");
		printf("%18f", fxi * fxm);
		printf("%9s", "|");
		cout<<"\n";
		printLine();
		
		if ( abs( fxi * fxm ) < approx ) {
			hasRoot = true;
			root = xm;
		} else if ( fxi * fxm < 0 ) {
			xs = xm;
		} else {
			xi = xm; 
		}
		
		counter++;
		
	} while( abs( fxi * fxm ) >= approx ); 
	
	if ( hasRoot ) {
		printf("\033[0;32m");
		printf("Raiz aproximada en: %.3f", root);
		printf("\033[0m");	
	} else {
		printf("En este rango no esta la raiz");
	}
	
	
	return 0;	
}

double evaluateFunction( double x ) {
	return pow( x, 2) - x - 12;
}

void printLine () {
	for (int i = 1; i <= 151; i++ ) {
		if( i == 1 || i == 151 ){
			cout<<"x";	
		} else {
			cout<<"-";	
		}
	}
	
	cout<<"\n";
}
