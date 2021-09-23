// Pointer & Array

#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 6, 8, 10};
    int *ptr;

    ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }

    return 0;
}