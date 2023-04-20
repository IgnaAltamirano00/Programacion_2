#include <iostream>
using namespace std;

int main(){
    int arreglo[15], a = 0;
    int *pun;

    for (int i = 0; i < 15; i++){
        a = rand() & 100;
        arreglo[i] = a;
    }

    for (int i = 0; i < 15; i++){
        cout << endl;
        pun = &arreglo[i];
        cout << "Valor "; cout << i+1; cout << ":"; cout << *pun;
        cout << endl;
        cout << "Direccion de memoria "; cout << i+1; cout << ":"; cout << pun;
    }

}