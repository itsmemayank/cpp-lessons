#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    bool flag = true;

    cout << "Enter length: ";
    cin >> n;

    char str[n + 1];

    cout << "Enter any string: ";
    cin >> str;

    for (int i = 0; i < n; i++)
    {
        if (str[i] != str[n - 1 - i])
        {
            flag = false;
            break;
        }
    }

    if (flag == true)
        cout << "Word is Palindrome";
    else
        cout << "Word is not Palindrome";

    return 0;
}