#include <iostream>
using namespace std;

int main() {

    int num,resultado = 1;
    cout << "ingrese un numero entero: \n";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        resultado = resultado * i;
    }
    
    cout << "el resultado es: " << resultado;

    return 0;
}
