/*Hacer un progrma para comprobar si un numero es primo o no
Usando if y un bool*/

#include <iostream>

using namespace std;

bool NumP(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int num;

    cout << "Dime un numero " << endl;
    cin >> num;

    if (NumP(num))
    {
        cout << "El numero es primo " << endl;
    }
    else
    {
        cout << "El numero no es primo " << endl;
    }
    return 0;
}
//Ejecucion exitosa