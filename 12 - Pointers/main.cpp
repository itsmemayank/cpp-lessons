#include <iostream>
using namespace std;

int main()
{
    int val = 10;
    int *ptr;

    ptr = &val;

    cout << "The value of val : " << val << endl;
    cout << "The address of val : " << &val << endl;

    cout << "The value of ptr : " << *ptr << endl;
    cout << "The address of ptr : " << ptr << endl;

    return 0;
}