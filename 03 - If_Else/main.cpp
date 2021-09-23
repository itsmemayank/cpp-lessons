#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any Positive Number: ";
    cin >> num;

    if (num == 0)
    {
        cout << "Number is neither Odd nor Even." << endl;
    }
    else if (num % 2 == 0)
    {
        cout << "Number is Even." << endl;
    }
    else
    {
        cout << "Number is Odd." << endl;
    }

    return 0;
}