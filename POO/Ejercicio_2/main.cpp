#include <iostream>
#include "cuenta.h"
#include <string>
using namespace std;

int main(){
    cuenta c;
    string n;
    bool verf;
    while (verf = false){
        cout << " INGRESE NOMBRE "; cin >> n;
        if (n == " "){
            verf = false;
        }
        else{
            verf = true;
        }        
    }
    cout << " INGRESE NOMBRE "; cin >> n;
    c.sett(n);

}