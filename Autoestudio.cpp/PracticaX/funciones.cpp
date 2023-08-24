#include <iostream>

using namespace std;

void edad()
{
    int fechaNac;
    const int RecentYear = 2023;
    int edad;

    cout << " Dime tu fecha de nacimiento " << endl;
    cin >> fechaNac;

    edad = RecentYear - fechaNac;

    cout << "Tu edad es: " << edad << endl;

    if (fechaNac % 4 == 0 && fechaNac % 100 == 0 && fechaNac % 400 == 0)
    {

        cout << " you were born in a leap year " << endl;
    }
    else
    {
        cout << " you weren't born in a leap year " << endl;
    }
}

void tablaSuma()
{
    int num1, num2;
    cout << "Dime el numero del que quieres saber la tabla " << endl;
    cin >> num1;
    cout << "Dime el numero por el que sumaras " << endl;
    cin >> num2;
    for (int i = 0; i <= 12; i++)
    {
        cout << i << " * " << num1 << " + " << num2 << " = " << i * num1 + num2 << endl;
    }
}

void Cuestionario()
{
    S
}
