#include <iostream>
using namespace std;

void marcarAsiento(bool *asiento){
    *asiento = true;
};


int main() {
    bool teatro[10] = {false};
    int num;

    cout << "Ingrese que numero de asiento quiere entre 1 y 10: \n";
    cin >> num;
    for (int i = 0; i < sizeof(teatro)/sizeof(teatro[0]); i++){
        if (num == i+1){
            marcarAsiento(&teatro[i]);
        }
    }
    cout << "Asientos \n";
    for (int i = 0; i < sizeof(teatro)/sizeof(teatro[0]); i++){
        if (teatro[i] == true){
            cout << i+1 << ": Ocupado \n";
        }
        else{
            cout << i+1 << ": Libre \n";
        }
    }
    
    system("pause");
    return 0;
}
