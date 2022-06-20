#include <iostream>
using namespace std;

int main()
{
    int a;  // declaration
    a = 12; // initialisation
    cout << "Size of int " << sizeof(a) << endl;

    float b;
    b = 12.88;
    cout << "Size of flot " << sizeof(b) << endl;

    char c;
    cout << "Size of char " << sizeof(c) << endl;

    bool d;
    cout << "Size of bool " << sizeof(d) << endl;

    short int e;
    cout << "Size of short int " << sizeof(e) << endl;

    long int f;
    cout << "Size of long int " << sizeof(f) << endl;

    return 0;
}
