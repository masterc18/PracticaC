// Hacer un programa que diga cuantas letras tiene tu nombre y si es extenso

#include <iostream>
#include <string>

using namespace std;

void Caracteres()
{
    string Nombre;

    cout << "Dime tu nombre " << endl;
    cin >> Nombre;

    cout << " Tu nombre tiene " << Nombre.size() << " Letras" << endl;

    if (Nombre.size() > 5)
    {
        cout << "Tu nombre es extenso";
    }
    else
    {
        cout << "Tu nombre no es extenso";
    }
}

int main()
{
    Caracteres();
    return 0;
}
//Ejercicio Realizado con exito