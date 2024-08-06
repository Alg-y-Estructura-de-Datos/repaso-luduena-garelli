#include <iostream>

using namespace std;

void marcarAsiento(bool *asiento)
{
  *asiento = true;
}

int main(int argc, char const *argv[])
{
  const int numAsientos = 10;
  bool asientos[numAsientos] = {false};

  cout << "Estado inicial de los asientos (0 = libre, 1 = ocupado):" << endl;
  for (int i = 0; i < numAsientos; i++)
  {
    cout << "Asiento " << i + 1 << ": " << asientos[i] << endl;
  }
  cout << endl;

  int asientoElegido;
  cout << "Elija un asiento (1-10): ";
  cin >> asientoElegido;

  if (asientoElegido >= 0 && asientoElegido < numAsientos)
  {
    marcarAsiento(&asientos[asientoElegido]);

    cout << "Estado de los asientos después de la reserva:" << endl;
    for (int i = 0; i < numAsientos; ++i)
    {
      cout << asientos[i] << " ";
    }
    cout << endl;
  }
  else
  {
    cout << "Número de asiento inválido." << endl;
  }

  return 0;
}
