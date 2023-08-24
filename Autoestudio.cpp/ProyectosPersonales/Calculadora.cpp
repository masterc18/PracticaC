#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
float num1;
float num2;
float raiz;

void suma()
{
    cout << "Dime un numero " << endl;
    cin >> num1;
    cout << "Dime otro numero " << endl;
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
}

void resta()
{
    cout << "Dime un numero " << endl;
    cin >> num1;
    cout << "Dime otro numero " << endl;
    cin >> num2;
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
}

void multiplic()
{
    cout << "Dime un numero " << endl;
    cin >> num1;
    cout << "Dime otro numero " << endl;
    cin >> num2;
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
}

void division()
{
    cout << "Dime un numero " << endl;
    cin >> num1;
    cout << "Dime otro numero " << endl;
    cin >> num2;
    if (num1 && num2 > 0)
    {
        cout << "Calculando............." << endl;
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
    }
    else
    {
        cout << "Operacion no valida " << endl;
    }
}

void pot()
{
    cout << "Dime un numero " << endl;
    cin >> num1;
    cout << "Dime otro numero " << endl;
    cin >> num2;
    cout << num1 << " elevado " << num2 << " = " << pow(num1, num2) << endl;
}

void rz()
{
    cout << "Dime un numero " << endl;
    cin >> num1;
    raiz = sqrt(num1);
    cout << "La raiz cuadrada de " << num1 << " es " << raiz << endl;
}

void Calculadora()
{
    int opcion;
    do
    {
        system("cls");
        system("color 02");
        cout << "================Bienvenido a la calculadora basica=========== " << endl;
        cout << "Que operacion quieres realizar " << endl;
        cout << "1. suma " << endl;
        cout << "2. resta " << endl;
        cout << "3. multiplicacion " << endl;
        cout << "4. division " << endl;
        cout << "5. elevar un numero a una potencia " << endl;
        cout << "6. sacar la raiz cuadrada de un numero " << endl;
        cout << "7. Salir " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            suma();
            break;
        case 2:
            resta();
            break;
        case 3:
            multiplic();
            break;
        case 4:
            division();
            break;
        case 5:
            pot();
            break;
        case 6:
            rz();
            break;
        case 7:
            cout << "Saliendo........... " << endl;
            break;

        default:
            cout << "Opcion no valida " << endl;
            break;
        }
    } while (opcion != 7);
}