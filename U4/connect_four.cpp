// CONNECT FOUR GAME 😊

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

// PROTOTYPES FUNCTION
void heading_game();

// BOARD
char board[7][7] = {
      {'00', '10', '20', '30', '40', '50', '60'},
      {'01', '11', '21', '31', '41', '51', '61'},
      {'02', '12', '22', '32', '42', '52', '62'},
      {'03', '13', '23', '33', '43', '53', '63'},
      {'04', '14', '24', '34', '44', '54', '64'},
      {'05', '15', '25', '35', '45', '55', '65'},
      {'06', '16', '26', '36', '46', '56', '66'}
	};

// VARIABLES TO PLAY
char start;
int type_of_game;

int main () {
	
	srand(time(NULL));
	heading_game();
	
	cout<<"Iniciar juego [S] / [N]: ";
	cin>>start;
	
	if ( start == 'S' || start == 's' ) {
		
		cout<<"\n[1] JUGAR DOS JUGADORES";
		cout<<"\n[2] JUGAR CONTRA COMPUTADORA";
		cout<<"\n\nDecision: ";
		cin>>type_of_game;	
		
		if ( type_of_game == 1 ) { // JUGADOR1 VS JUGADOR2
			cout<<"Contra dos jugadores";
		} else { // JUGADOR VS COMPUTADORA
			cout<<"Contra la computadora";
		}
		
	} else {
		system("cls");
		system("Color 60");
		cout<<"JUEGO TERMINADO."<<endl;
	}
		
	return 0;
}

void heading_game() {
	system("cls");
	
	for ( int i = 1; i <= 3; i++ ) {
		if ( i == 1 || i == 3 ) {
			for( int j = 0; j <= 50; j++ ) {
				if ( j == 0 || j == 50 ) {
					cout<<"x";
				} else {
					cout<<"-";	
				}
			}	
			
			cout<<endl;	
		} else {
			printf("|");
			printf("%31s", "CONECTA CUATRO" );
			printf("%20s", "|\n");
		}
	}
	
	cout<<"\n";
}