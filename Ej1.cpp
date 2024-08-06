#include <iostream>
using namespace std;

void exchangeJuices(float &firstGlass, float &secondGlass)
{
  float temp = firstGlass;
  firstGlass = secondGlass;
  secondGlass = temp;
}

int main()
{
  float orangeJuice, appleJuice;

  cout << "Enter the amount of orange juice: ";
  cin >> orangeJuice;
  cout << "Enter the amount of apple juice: ";
  cin >> appleJuice;

  exchangeJuices(orangeJuice, appleJuice);

  cout << "after exchange:" << endl;
  cout << "The amount of orange juice is: " << orangeJuice << endl;
  cout << "The amount of apple juice is: " << appleJuice << endl;

  return 0;
}