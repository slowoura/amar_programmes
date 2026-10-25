#include <iostream>
using namespace std;

int main() {
    int a = 10;

    int *p = &a;      // p holds address of a
    int **pp = &p;    // pp holds address of pointer p

    cout << "a = " << a << endl;

    cout << "Address of a (&a): " << &a << endl;
    cout << "Pointer p (value of p): " << p << endl;

    cout << "Value at p (*p): " << *p << endl;

    cout << "Address of pointer p (&p): " << &p << endl;
    cout << "Pointer to pointer pp: " << pp << endl;

    cout << "Value at pp (*pp): " << *pp << endl;
    cout << "Value at *pp (**pp): " << **pp << endl;

    return 0;
}