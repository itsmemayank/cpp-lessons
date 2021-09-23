// Pointer to Pointer

#include <iostream>
using namespace std;

int main()
{
    int val = 10;

    int *ptr;
    ptr = &val;
    cout << "Value of ptr : " << *ptr << endl;

    int **ptr2ptr;
    ptr2ptr = &ptr;
    cout << "Address of ptr2ptr : " << *ptr2ptr << endl;
    cout << "Value of ptr2ptr : " << **ptr2ptr << endl;

    return 0;
}