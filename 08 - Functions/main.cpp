#include <iostream>
using namespace std;

// Mathematical Functions
int add(int x, int y)
{
    return x + y;
}

int sub(int x, int y)
{
    return x - y;
}

int mul(int x, int y)
{
    return x * y;
}

float div(int x, int y)
{
    return float(x) / float(y);
}

// Main Function
int main()
{
    int x, y, op;
    double result;

    cout << "/********** CALCULATOR **********" << endl;
    cout << "Enter 1st no: ";
    cin >> x;

    cout << "Enter 2nd no: ";
    cin >> y;

    cout << "Select Operator:\n1-Add()\n2-Sub()\n3-Mul()\n4-Div()\n";
    cin >> op;

    switch (op)
    {
    case 1:
        result = add(x, y);
        cout << "Addition: " << result << endl;
        break;

    case 2:
        result = sub(x, y);
        cout << "Subtraction: " << result << endl;
        break;

    case 3:
        result = mul(x, y);
        cout << "Multiplication: " << result << endl;
        break;

    case 4:
        result = div(x, y);
        cout << "Division: " << result << endl;
        break;

    default:
        cout << "Invalid Operator" << endl;
    }

    return 0;
}
