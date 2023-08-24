/*Hacer un programa que contenga arreglos que sumen dos numeros
y luego que se reste por otro */

#include <iostream>

using namespace std;

void Suma()
{
   int Numeros[3];
   int resultado = 0;
   int resultadoF = 0;

   cout << "Dime el primer numero a sumar " << endl;
   cin >> Numeros[0];

   cout << "Dime el segundo numero a sumar " << endl;
   cin >> Numeros[1];

   cout << "Dime el numero por cual se restara " << endl;
   cin >> Numeros[2];

   resultado = Numeros[0] + Numeros[1];
   resultadoF = resultado - Numeros[2];

   cout << "El restultado de la suma de " << Numeros[0] << " + " << Numeros[1] << " = " << resultado << endl;
   cout << " El resultado Final del problema al restar " << resultado << " - " << Numeros[2] << " = " << resultadoF << endl;
}

int main(int argc, char const *argv[])
{
   Suma();
   return 0;
}

// Ejercicio realizado exitosamente