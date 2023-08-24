#include <iostream>

using namespace std;

void Puntero(){
    //Para mostrar la posicion de la variable 
    int valor = 10, *dir_Valor;
    dir_Valor = &valor;

    cout << dir_Valor;
}

int main(int argc, char const *argv[])
{
    Puntero();
    return 0;
}
