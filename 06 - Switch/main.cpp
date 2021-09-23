#include <iostream>
using namespace std;

int main()
{
    int num1, num2, op;

    cout << "Enter 1st no: ";
    cin >> num1;
    cout << "Enter 2nd no: ";
    cin >> num2;
    cout << "Choose any operator (1-Add / 2-Sub / 3-Mul /4-Div): ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Addition: " << num1 + num2 << endl;
        break;

    case 2:
        cout << "Subtraction: " << num1 - num2 << endl;
        break;

    case 3:
        cout << "Multiplication: " << num1 * num2 << endl;
        break;

    case 4:
        cout << "Division: " << num1 / num2 << endl;
        break;

    default:
        cout << "Invalid Opertaor" << endl;
    }

    return 0;
}