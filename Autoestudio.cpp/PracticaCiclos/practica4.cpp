#include <iostream>

using namespace std;

void NumeroMayor()
{
    int Num[10], n, mayor = 0, menor = 0;

    cout << "Dime la cantidad de numeros que quieres ingresar " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << ". Dime los numeros " << endl;
        cin >> Num[i];

        if (Num[i] > mayor)
        {
            mayor = Num[i];
        }
        else
        {

            menor = Num[i];
        }
    }

    cout << "El numero mayor es " << mayor << endl;
    cout << "El numero menor es " << menor << endl;
}

int main(int argc, char const *argv[])
{
    NumeroMayor();
    return 0;
}
