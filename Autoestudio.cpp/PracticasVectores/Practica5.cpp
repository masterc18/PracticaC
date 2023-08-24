/*Hacer un programa que sume los numeros en un arreglo predeterminado*/

#include <iostream>

using namespace std;

void Suma(){
    int numeros[]={10,20,30,40,50};
    int suma=0;

    for(int i=0; i < 5; i++ ){

        suma+=numeros[i];
    }
    cout << "La suma total es " << suma << endl;
}

int main(int argc, char const *argv[])
{
    Suma();
    return 0;
}
