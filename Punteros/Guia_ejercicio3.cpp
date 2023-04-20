#include <iostream>
using namespace std;

int main(){
    int arreglo[5], *pun1, *pun2;

    for (int i = 0; i < 5; i++){ // tomar valores para el arreglo
        cout << i+1; cout << ":";
        cin >> arreglo[i];
    }
    
    for (int i = 0; i < 5; i++){ // mostrar direcciones de las variables del arreglo
        if(i == 0){
            pun1 = &arreglo[0];
        }
        if(i == 4){
            pun1 = &arreglo[4];
        }
    }
    
    cout << pun1 << endl;
    cout << pun2 << endl;

    return 0;
}