
/*Una discoteca pide un programa de edades para saber si las personas pueden pasar o no
La condicion es que sean mayor a 18, use un ciclo while */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombre;
    int edad;

    while (true)
    {
        cout << "Dime tu nombre " << endl;
        cin >> nombre;
        cout << "Dime tu edad " << endl;
        cin >> edad;

        if (edad >= 18)
        {
            cout << " Entra " << endl;
        }
        else
        {
            cout << "No entra" << endl;
        }
    }

    return 0;
}
//Exito