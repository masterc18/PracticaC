/* Hacer un programa que sume el cubo de los primeros 20 numeros
enteros*/

#include <iostream>

using namespace std;

void Suma(int suma=0){
    int cuadrado =0;
    for(int i=1; i <=20; i++){

        cuadrado = i*i*i;

        suma+=i;

    }

    cout << "El resultado es " << suma << endl;
}

int main(int argc, char const *argv[])
{
    Suma();

    return 0;
}

/*Ejercicio hecho correctamenta*/
