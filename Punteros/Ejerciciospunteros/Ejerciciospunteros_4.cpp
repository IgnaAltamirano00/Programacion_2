#include <iostream>
using namespace std;

void ingreso_valores(int a, int *p1, float b, float *p2) {

  p1 = &a;
  p2 = &b;

  cout << "Ingrese el valor de p1 (int): ";
  cin >> *p1;
  cout << "Ingrese el valorS de p2 (float): ";
  cin >> *p2;

  cout << "a: ";
  cout << a;
  cout << "\nb: ";
  cout << b;
}

int main() {
  int a, *p1;
  float b, *p2;

  ingreso_valores(a, &a, b, &b);

  return 0;
}