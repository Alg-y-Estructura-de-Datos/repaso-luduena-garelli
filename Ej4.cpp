#include <iostream>
#include <cmath>
using namespace std;

int sumaEnteros(int n1,int n2){
    return n1 + n2;
}

float CalcularAreaCirculo(float r){
    return 3.1415 * pow(r,2);
}

int CalcularPotencia(int base,int exp){
    return pow(base,exp);
}

void Menu(){
    int opcion;

    do
    {
        cout << "ingrese una opcion:" 
        "\n (1) Sumar Enteros"
        "\n (2) Calcular Area de un circulo"
        "\n (3) Calcular la potencia de un numero \n";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            int num1,num2;
            cout << "ingrese el primer numero: ";
            cin >> num1;
            cout << "ingrese el segundo numero: ";
            cin >> num2;
            cout << "la suma es: " << sumaEnteros(num1,num2) << endl;
            break;
        
        case 2:
            float radio;
            cout << "ingrese el radio del circulo:" ;
            cin >> radio;
            cout << "El area es: " << CalcularAreaCirculo(radio) << endl;
            break;            

        case 3:
            int base,exp;
            cout << "ingrese la base: ";
            cin >> base;
            cout << "ingrese el exponente: ";
            cin >> exp;
            cout <<"la potencia es: " << CalcularPotencia(base,exp) << endl;

        default:
            break;
        }
    } while (opcion != 0);
    
}

int main() {
    
    Menu();           

    return 0;
}
