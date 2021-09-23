#include <iostream>
using namespace std;

int main()
{
    int num1 = 3, num2 = 2;

    // Assignment Operator
    cout << "Assignment Operator: " << endl;
    cout << "+= " << (num1 += num2) << endl;
    cout << "-= " << (num1 -= num2) << endl;
    cout << "*= " << (num1 *= num2) << endl;
    cout << "/= " << (num1 /= num2) << endl;

    cout << endl; // Blank Space

    // Arithmetic Operator
    cout << "Arithmetic Operator: " << endl;
    cout << "+ : " << num1 + num2 << endl;
    cout << "- : " << num1 - num2 << endl;
    cout << "* : " << num1 * num2 << endl;
    cout << "/ : " << num1 + num2 << endl;
    cout << "% : " << num1 % num2 << endl;

    cout << endl; // Blank Space

    // Relational Operator
    cout << "Relational Operator: " << endl;
    cout << "!= : " << (num1 != num2) << endl;
    cout << "== : " << (num1 == num2) << endl;
    cout << "> : " << (num1 > num2) << endl;
    cout << "<= : " << (num1 <= num2) << endl;
    cout << "< : " << (num1 < num2) << endl;
    cout << ">= : " << (num1 >= num2) << endl;

    cout << endl; // Blank Space

    // Logical Operator
    cout << "Logical Operator: " << endl;
    cout << "&& : " << (num1 && num2) << endl;
    cout << "|| : " << (num1 || num2) << endl;
    cout << "! : " << !(num1 == num2) << endl;

    cout << endl; // Blank Space

    // Increment Decrement
    cout << "Increment/Decrement Operator: " << endl;
    cout << "++pre : " << ++num1 << endl;
    cout << "post++ : " << num1++ << endl;
    cout << "--pre : " << --num2 << endl;
    cout << "post-- : " << num2-- << endl;

    cout << endl; // Blank Space

    // Bitwise Operator
    cout << "Bitwise Operator: " << endl;
    cout << "Bitwise & : " << (0101 & 0110) << endl;
    cout << "Bitwise | : " << (0101 | 0110) << endl;
    cout << "Bitwise ^ : " << (0101 ^ 0110) << endl;
    cout << "Bitwise << : " << (4 << 1) << endl;
    cout << "Bitwise >> : " << (4 >> 1) << endl;
    cout << "Bitwise ~ : " << (~0101) << endl;

    cout << endl; // Blank Space

    // Miscellaneous Operator
    int *num3 = &num2;
    cout << "Miscellaneous Operator: " << endl;
    cout << "sizeof() : " << sizeof(num1) << endl;
    cout << "Ternary : " << (num1 > num2 ? "num1 is greater" : "num2 is greater") << endl;
    cout << "Casting : " << float(num1) << endl;
    cout << "Address : " << &num1 << endl;
    cout << "Pointer : " << *num3 << endl;

    return 0;
}