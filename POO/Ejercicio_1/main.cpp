#include <iostream>
#include "triangulo.h"
using namespace std;

int main(){
    int n, m;
    triangulo t;
    cout << "Ingrese el valor de la base: "; cin >> n;
    t.setb(n);
    cout << "Ingrese el valor de la altura: "; cin >> m;
    t.seth(m);
    cout << "La superficie del triangulo es >>> "; cout << t.gets();

    return 0;
}
