#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

// PROTOTYPES FUNCTION
void heading_game();
void validate_move();
void show_board();

// BOARD
char board[7][7] = {
      {'1', '2', '3', '4', '5', '6', '7'},
      {'1', '2', '3', '4', '5', '6', '7'},
      {'1', '2', '3', '4', '5', '6', '7'},
      {'1', '2', '3', '4', '5', '6', '7'},
      {'1', '2', '3', '4', '5', '6', '7'},
      {'1', '2', '3', '4', '5', '6', '7'},
      {'1', '2', '3', '4', '5', '6', '7'},
	};

// VARIABLES TO PLAY
char start;
char player1[20];
char player2[20];
int type_of_game;
int turn = 1;
char computer[] = "COMPUTADORA";
int move = 0;

bool winner = true;

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
			
			cout<<"\nIngrese nombre del jugador [1]: ";
			cin>>player1;
					
			cout<<"Ingrese nombre del jugador [2]: ";
			cin>>player2;
					
			do {
				
				validate_move();	
					
			} while( !winner );
			
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


void show_board() {
	system("cls");
	cout<<"============= TABLERO DE JUEGO =============\n"<<endl;
	cout<<"Este es el tablero de juego para colocar tus movimientos.\n\n";
	cout<<"ELIGE UNA COLUMNA.\n\n";
	
	for( int i = 0; i <= 6; i++ ) {
		
		if ( i == 0 ) {
			cout<<"\t";
			for( int k = 1; k <= 43; k++ ) {
				if( k == 1 || k == 43 ) {
					cout<<"*";
				} else {
					cout<<"-";		
				}
			}
			cout<<"\n";
		}
		
		
		cout<<"\t";
		for ( int j = 0; j <= 6; j++ ) {
			if ( j == 0 ) {
				cout<<"|";
			}
					
			if ( board[i][j] == 'X' ) {
				cout<<"  "<<"\033[1;32m"<<board[i][j]<<"\033[0m"<<"  |";
			} else if ( board[i][j] == 'O' ) {
				
				if ( type_of_game == 1 ) {
					cout<<"  "<<"\033[0;35m"<<board[i][j]<<"\033[0m"<<"  |";
				} else {
					cout<<"  "<<"\033[0;34m"<<board[i][j]<<"\033[0m"<<"  |";	
				}
				
			} 
			else {
				cout<<"  "<<board[i][j]<<"  |";
			}				
		}
				
		cout<<"\n";
		cout<<"\t";
		for( int k = 1; k <= 43; k++ ) {
			if( k == 1 || k == 43 ) {
				cout<<"*";
			} else {
				cout<<"-";		
			}
		}
		cout<<"\n";
	}
			
	cout<<"\n";
}

void validate_move () {
	
	do {
		show_board();	
		
		if ( turn == 1 ) {
			cout<<"\nTurno de "<<"\033[1;32m"<<player1<<"\033[0m"<<": ";
		} else if ( turn == 2 ) {
			cout<<"\nTurno de "<<"\033[0;35m"<<player2<<"\033[0m"<<": ";
		} else {
			cout<<"\nTurno de "<<"\033[0;34m"<<computer<<"\033[0m"<<": ";
		}
		
		cin>>move;
		
	} while ( move < 1 || move > 7 || board[move - 1][0] == 'X' || board[move - 1][0] == 'O' );
						
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