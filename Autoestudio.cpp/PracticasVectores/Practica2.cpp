/*Hacer un programa usando arreglos para decir un nombre y decir la inical del primer nombre, del segundo nombre 
y del primer apellido y segundo*/

#include <iostream>
#include <stdio.h>

using namespace std;

void nombre(){
    char nombre[30];
    char nombre2[30];
    char apellido[30];
    char apellido2[30];

    cout << " Dime tu nombre " <<endl;
    cin >> nombre;
    cout << " Dime tu 2do nombre " << endl;
    cin >> nombre2;
    cout << "Dime tu primer apellido " << endl;
    cin>> apellido;
    cout << " Dime tu segundo apellido " << endl;
    cin >> apellido2;
    system("pause");
    cout << "Hola " << nombre << "  " << nombre2 << "  " << apellido << "  " << apellido2 << endl;
    system("pause");
    cout << " La iniciales de tu nombre completo es "<< endl;
    cout << nombre[0] << nombre2[0] << apellido[0] << apellido2[0] << endl;

}

int main(int argc, char const *argv[])
{
    nombre();
    return 0;
}

//Ejercicio hecho con exito
