/*Hacer un programa que muestre las letras de un nombre usando arreglos
y un ciclo si es necesario*/

#include <iostream>

using namespace std;

void Estudinates(){
    char nombre[20];

    cout << " Ingrese el nombre " << endl;
    cin >> nombre;
    cout << "Las letras del nombre son: " << endl;
    cout << "\n\n";

    for(int i=0; i <=20; i++){

        
        cout << nombre[i] << endl;
    }
}

int main(int argc, char const *argv[])
{
    Estudinates();
    return 0;
}
