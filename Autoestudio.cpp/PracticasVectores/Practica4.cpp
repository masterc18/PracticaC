/*Hacer un programa que saume una serie de numeros
dada por el usuario*/

#include <iostream>

using namespace std;

void Suma2()
{
    int numerosS[5];
    int suma = 0;
    int n;

    cout << "Dime la cantidad de numeros que quiere sumar " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {

        cout << i + 1 << ". Dime los numeros " << endl;
        cin >> numerosS[i];

        suma += numerosS[i];
    }

    cout << "La suma de todos los numeros es " << suma << endl;
}

int main(int argc, char const *argv[])
{
    Suma2();
    return 0;
}
//Ejercicio realizado exitosamente