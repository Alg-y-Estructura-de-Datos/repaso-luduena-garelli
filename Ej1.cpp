#include <iostream>
using namespace std;

void intercambiarJugos(float &jugo1,float &jugo2){
    float aux;
    aux = jugo1;
    jugo1 = jugo2;
    jugo2 = aux;
}

int main() {

    float jugo1 = 5.7;
    float jugo2 = 0.8;
    cout << "contenido jugo 1: " << jugo1 << endl;
    cout << "contenido jugo 2:" << jugo2 << endl;

    intercambiarJugos(jugo1,jugo2);
    
    cout << "contenido jugo 1: " << jugo1 << endl;
    cout << "contenido jugo 2:" << jugo2 << endl;

    return 0;
}
