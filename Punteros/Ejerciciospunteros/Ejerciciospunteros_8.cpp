#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    a = 5;
    b = 10;
    c = 15;

    int *pun1;

    pun1 = &a;
    pun1 = &b;
    pun1 = &c;

    cout << *pun1;
}
