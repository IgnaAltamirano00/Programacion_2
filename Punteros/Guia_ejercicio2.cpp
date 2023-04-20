#include <iostream>
using namespace std;

int main(){
    int arreglo[5], *pun;

    for (int i = 0; i < 5; i++){ // tomar valores para el arreglo
        cout << i+1; cout << ":";
        cin >> arreglo[i];
    }
    
    for (int i = 0; i < 5; i++){ // mostrar direcciones de las variables del arreglo
        pun = &arreglo[i];
        cout << i+1; cout << " - Direccion: ";
        cout << pun;
        cout << endl;
    }
    
    return 0;
}