#include <iostream>
using namespace std;

int main(){
    int *p, z = 0;
    p = &z;

    cout << "Ingrese el valor de p:"; cin >> *p;

    cout << z << endl;
    cout << *p;

}