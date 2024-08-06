#include <iostream>
using namespace std;

unsigned long long factorial(int n)
{
  if (n == 0)
  {
    return 1;
  }
  else
  {
    return n * factorial(n - 1);
  }
}

int main()
{
  int n;

  cout << "Ingrese un número: ";
  cin >> n;

  cout << "El factorial de " << n << " es " << factorial(n) << endl;

  return 0;
}
