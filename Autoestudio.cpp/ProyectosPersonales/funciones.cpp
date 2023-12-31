
#include <iostream>
#include "Calculadora.cpp"

using namespace std;
void tablaSuma()
{
    int num1, num2;
    cout << "Dime el numero del que quieres saber la tabla " << endl;
    cin >> num1;
    cout << "Dime el numero por el que sumaras " << endl;
    cin >> num2;
    for (int i = 1; i <= 12; i++)
    {
        cout << i << " * " << num1 << " + " << num2 << " = " << i * num1 + num2 << endl;
    }
}
void contarNums()
{
    for (int i = 1000; i >= 1; i--)
    {
        cout << i << endl;
    }
}

void salarioHX()
{
    int salarioM = 32500;
    int horasX;
    cout << "El salario minimo de la empresa es " << salarioM << " Cordobas " << endl;
    cout << "Entonces dime las horas extras trabajadas " << endl;
    cin >> horasX;

    if (horasX >= 3)
    {
        cout << "El salario del empliado ha cumplido con las horas para aumentar el salario " << salarioM * 2 << " Cordobas " << endl;
    }
    else
    {
        cout << "No es apto para el incremento de su salario " << endl;
    }
}

void Calific()
{
    float star;
    cout << "Gracias por probar este programa, agradeceria su opinion con una calificacion " << endl;
    cout << "Diga su calificacion " << endl;
    cin >> star;

    if (star < 5)
    {
        cout << "La calificacion es mala, hay que mejorar " << endl;
    }
    else
    {
        cout << "La calificacion es buena " << endl;
    }
}

void menu()
{
    int opcion;
    do
    {
        system("cls");
        system("color 02");
        cout << "================ menu del programa===============" << endl;
        cout << "Elige entre nuestras opciones " << endl;
        cout << "1. Leer la tabla de un numero y sumarla con otro numero " << endl;
        cout << "2. Contar los numeros del 1000 al 1 " << endl;
        cout << "3. Saber el salario minimo de una persona por horas extras trabajadas " << endl;
        cout << "4. calculadora  " << endl;
        cout << "5. salir " << endl;
        cout << " Dime una opcion " << endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            system("color 03");
            tablaSuma();
            break;

        case 2:
            system("Color 05");
            contarNums();
            break;

        case 3:
            system("Color 06");
            salarioHX();
            break;
        case 4:
            Calculadora();
            break;
        case 5:
            system("Color 09");
            cout << "Ha salido del programa " << endl;
            break;

        default:
            system("Color 04");
            cout << "Error 220: Opcion no valida " << endl;
            break;
        }
        system("Pause");
    } while (opcion != 5);
}