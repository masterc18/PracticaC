/*Hacer un programa en donde el usuario escriba una frase
y que se repita tantas veces como el usuario quiera*/

/*Nota: Para guardar con espacios una cadena se usa getline(funciones del archivo string)
Sintaxis: getline(cin, la variable donde se guardara)*/


#include <iostream>
#include <string>

using namespace std;

int main()
{
    string frase;
    int repeticiones;
    int size;

    cout << "Dime una frase"<<endl;
    
    getline(cin, frase);

    cout << "Dime cuantas veces quieres que se repita " << endl;
    cin >> repeticiones;

    for(int i=0; i < repeticiones; i++){
        cout << frase << endl;
    }

    size = frase.length();

    cout << " La frase tiene "<< size << " Caracteres" << endl;





    return 0;
}
