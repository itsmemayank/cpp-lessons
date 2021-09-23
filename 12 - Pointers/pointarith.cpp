// Pointer Arithemetic

#include <iostream>
using namespace std;

int main()
{
    int val = 10;
    int *ptr = &val;

    cout << "Address of ptr(Before) : " << ptr << endl;
    ptr++;
    cout << "Address of ptr(After) : " << ptr << endl;

    return 0;
}