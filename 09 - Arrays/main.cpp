#include <iostream>
using namespace std;

int main()
{
    // Array Declared and Initialized
    int array[5] = {10, 20, 30};

    // Assigning Elements to an Array
    array[3] = 40;
    array[4] = 50;

    for (int i = 0; i < 5; i++)
    {
        // Accessing Array
        cout << "Array[" << i << "] : " << array[i] << endl;
    }

    return 0;
}