/*Hacer un programa que muestre los multiplos de un numero dado por el usuario*/

#include <iostream>

using namespace std;

void Multiplo()
{

    int num;
    cout << "Ingrese un número: " << endl;
    cin >> num;
    cout << "Los multiplos de " << num << " son: " << endl;
    for (int i = num; i <= 100; i+=num)
    {
        cout << i << endl;
    }
}

int main()
{
    Multiplo();
    return 0;
}
//Ejecicio realizado desonhrosamente