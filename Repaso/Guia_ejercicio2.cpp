#include <iostream>
using namespace std;

int datos_num(int &A,int &B,int &K){
    cout << "PEDIDOS DE DATOS \n";
    cout << "Ingrese un entero A: ";
    cin >> A;
    cout << "Ingrese un entero B: ";
    cin >> B;
    cout << "Ingrese un entero K (diferente a 0): ";
    cin >> K;

    return A, B, K;
}

void calculo(int A, int B, int K){
    int n;
    n = B - A;
    int entorno[n];
    int cant_divi = 0;

    for(int i = A + 1; i < B; i++){
        entorno[i] = i;
    }
    
    for (int i = 0; i < 99; i++){
        for (int j = 0; j < n; j++){
            if ((i/K) == entorno[j]){
                cant_divi = cant_divi + 1;
            }
        }
    }

    cout << "La cantidad de nymeros que diviendolos por K dan resulatdos dentro del entorno es: "; cout << cant_divi;
    cout << endl;
    
}

int main(){
    int A, B, K;

    datos_num(A, B, K);
    calculo(A, B, K);

    return 0;
}