#include <iostream>
using namespace std;

int main()
{
    // DATA TYPES
    int a = 10;
    cout << "a: " << a << ", Size of a: " << sizeof(a) << endl;

    float b = 3.14;
    cout << "b: " << b << ", Size of b: " << sizeof(b) << endl;

    char c = 'a';
    cout << "c: " << c << ", Size of c: " << sizeof(c) << endl;

    bool d = 1;
    cout << "d: " << d << ", Size of d: " << sizeof(d) << endl;

    cout << endl; // Blank Space

    // TYPE MODIFIER
    short int si;
    cout << "Size of si: " << sizeof(si) << endl;

    long int li;
    cout << "Size of li: " << sizeof(li) << endl;

    return 0;
}