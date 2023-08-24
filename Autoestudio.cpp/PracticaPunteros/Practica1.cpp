/*Hacer un programa en donde se muestre la direccion de la memoria
&n = la direccion de n
*n = la variable cuya direccion esta almacenada n*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num = 10, *dir_num;

    dir_num = &num;

    cout << "Numero " << *dir_num << endl;

    cout << " Direccion: " << dir_num << endl;
    return 0;
}
