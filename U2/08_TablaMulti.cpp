#include <iostream>

using namespace std;

float validateIntergetNumber( char const *string );
void printLine( void );

int main () {
		
	float base, limit;
	char baseString[10] = "base";
	char limitString[10] = "limite";
	
	cout<<"\tTABLAS DE MULTIPLICAR\n\n";
	
	base = validateIntergetNumber(baseString);
	limit = validateIntergetNumber(limitString);
		
	cout<<"Esta es la tabla del: "<<base<<endl;
		
	for ( int i = 1; i <= limit; i++ ) {
		
		if ( i == 1 ){
			
			printLine();
			
			cout<<"\n| "<<base<<"\tx\t"<<i<<"\t=\t"<<base * i<<"\t|"<<endl;
			
			printLine();
			
		} else {
			
			cout<<"\n| "<<base<<"\tx\t"<<i<<"\t=\t"<<base * i<<"\t|"<<endl;
			
			printLine();
		}
		
	}
		
	return 0;
}

/*This function validate if the user entered a number that is not interget 
or if this number is negative*/
float validateIntergetNumber( char const *string ) { 
	
	float numberFloat;
	int numberInt; 
	
	cout<<"Ingrese "<<string<<" para la tabla: ";
	cin>>numberFloat;
	
	numberInt = numberFloat;
	
	while ( (numberFloat - numberInt) != 0 || numberFloat < 0 ) {
		cout<<"\nNo es un numero valido"<<endl;
		cout<<"Ingrese "<<string<<" para la tabla: ";
		cin>>numberFloat;
		numberInt = numberFloat;
	}
	
	cout<<"\n";
	
	return numberFloat;
}

/*Print a line of a stablished lenght*/
void printLine () {
	for ( int j = 0; j <= 40; j++ ) {
		cout<<"-";
	}
}

