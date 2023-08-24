/*Hacer un programa que muestre la posicion de memoria de los elementos de un vector
y la posicion de los elementos */

#include <iostream>

using namespace std;

void PoscionE(){
    int numeros[]={1,2,3,5,7};
    int *dir_elementos;

    dir_elementos=numeros;

    for (int i = 0; i < 5; i++)
    {
        cout << "Elementos del vector [" << i << "]:" << *dir_elementos++ << endl;
    }
    
}

void PosicionMem(){
    int numeros[5];
    int *dir_elementos;

    dir_elementos=numeros;

    for (int i = 0; i < 5; i++)
    {
        cout << "posicion de memoria " << numeros[i] << " es " << dir_elementos++ << endl;
    }
    
}

int main()
{
    PoscionE();

    PosicionMem();
    return 0;
}
