#include <iostream>
using namespace std;

int main() {
    int a = 501;
    int *p;
    p = &a;
    *p = 5;

    return 0;
}