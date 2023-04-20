#include <iostream>
using namespace std;

int datos_num(int &X,int &Y,int &D){
    cout << "PEDIDOS DE DATOS \n";
    cout << "Ingrese la posicion actual X del grillo: ";
    cin >> X;
    cout << "Ingrese la posicion final Y del grillo: ";
    cin >> Y;
    cout << "Ingrese la distancia del salto D del grillo: ";
    cin >> D;

    return X, Y, D;
}

void saltos_minimo(int X, int Y, int D){
    int diferencia;
    int saltos;
    diferencia = Y - X;

    for(int i = D; i < diferencia; i++){
        saltos = saltos + 1;
    }

    cout << "el numero de saltos que necesita el grillo para ir de X a Y, con un salto de distancia D, es de: "; cout << saltos; cout << endl;
    cout << endl;
    
}

int main(){
    int X;
    int Y;
    int D;

    datos_num(X, Y, D);
    saltos_minimo(X, Y, D);
    return 0;
}