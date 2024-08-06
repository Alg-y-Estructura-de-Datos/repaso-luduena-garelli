#include <iostream>
#include <cmath>
#include <thread>
#include <chrono>

using namespace std;

class Program
{
private:
  bool exitProgram;

public:
  Program() { exitProgram = false; }
  void clearScreen()
  {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
  }
  void menu()
  {
    int option;
    while (!exitProgram)
    {
      clearScreen();
      cout << "1. Sumar 2 enteros" << endl;
      cout << "2. Calcular el area de un circulo" << endl;
      cout << "3. Calcular la potencia de un numero" << endl;
      cout << "4. Salir" << endl;

      cout << "Ingrese una opcion: ";
      cin >> option;

      switch (option)
      {
      case 1:
        cout << "La suma de los enteros es: " << sumarEntero() << endl;
        this_thread::sleep_for(chrono::seconds(1));
        break;
      case 2:
        cout << "El area del circulo es: " << calcularAreaCirculo() << endl;
        this_thread::sleep_for(chrono::seconds(1));
        break;
      case 3:
        cout << "La potencia es: " << calcularPotencia() << endl;
        this_thread::sleep_for(chrono::seconds(1));
        break;
      case 4:
        exitProgram = true;
        break;
      default:
        cout << "Opcion no valida" << endl;
        break;
      }
    }
  }
  int sumarEntero()
  {
    int a, b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;

    return a + b;
  }
  float calcularAreaCirculo()
  {
    float radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;

    return M_PI * pow(radio, 2);
  }
  int calcularPotencia()
  {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    return pow(base, exponente);
  }
};

int main(int argc, char const *argv[])
{
  Program program;

  program.menu();

  return 0;
}
