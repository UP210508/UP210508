/* Unidad 2. Uso del if 
   Autor: Danna Janeth Sánchez Carreón
   Fecha: 22/09/2022
   Descripción: Muestra el uso del if simple
*/

//Libreria para manejo de entradas y salida de pantalla
#include <iostream>

//Uso del namespace para evitar el std::
using namespace std;

//Función principal de tipo entero
int main()
{
   int numero;
   int dato = 1;

   cout << "Ingresa un numero entero: ";
   cin >> numero;
   if (numero == dato){
    cout << "El número es igual a dato" << endl;
   }   
 
    //Ejercicio: utilice las diferentes comparaciones ==, !=, <, >, <=, >=

    

    //Al ser una función debe retornar un valor, en este caso 0
    return 0;
}