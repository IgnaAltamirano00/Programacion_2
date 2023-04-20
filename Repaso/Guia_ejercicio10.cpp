#include <iostream>
using namespace std;

void vectors(int n, int num[]){
    for (int i = 0; i < n; i++){
        cout << i+1 << ":";
        cin >> num[i];
    }
}

void orden(int n, int num[]){
    int imp, par, ex;
    for (int i = 0; i < n; i++){
        ex=0;
        if ((num[i] % 2) == 0){
            par = num[i];
            ex = num[i+1];
            num[i+1] = par;
            num[i] = ex;
        }
        else{
            imp = num[i];
            ex = num[i-1];
            num[i-1] = imp;
            num[i] = ex;
        }

    }
    
    cout << "El vector ahora con los numeros impares primeros es: ";
    cout << "[";
    for (int i = 0; i < n; i++){
        cout << num[i];
    }
    cout << "]";
}

int main (){
    
    int n;
    cout << "ingrese la cantidad de elementos que quiera que contenga el vector: ";
    cin >> n;
    
    int num[n];
    vectors(n, num);
    orden(n, num); 
    
}