// Pointer to Function

#include <iostream>
using namespace std;

void passByValue(int val1)
{
    val1++;
}

void passByReference(int &val2)
{
    val2++;
}

int main()
{
    int val1 = 10;
    int val2 = 10;

    passByValue(val1);
    passByReference(val2);

    cout << "Value of val1 : " << val1 << endl;
    cout << "Value of val2 : " << val2 << endl;

    return 0;
}