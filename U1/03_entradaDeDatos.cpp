/* Unidad 1. Entrada de datos
   Autor: Danna Janeth Sanchez Carreon
   Fecha: 21/09/2022
   Descripción: Muestra la forma de ingresar tipos de datos por el usuario
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>
//Libreria para el uso de printf y scanf
#include <stdio.h>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
    
    int entero;
    float flotante;
    double grande;
    char caracter;
    
    cout << "Este programa muestra el ingreso de datos por el usuario. \n";
    cout << "Ingresa un dato de tipo entero: ";
    cin >> entero;
    cout << "El dato ingresado es: " << entero << endl;
    
    cout << "=================" << endl;

   
    printf("Usando la función printf y scanf\n");
    printf("Ingresa un dato de tipo entero: ");
    scanf("%d", &entero);
    printf("El dato ingresado es: %i \n", entero);

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}