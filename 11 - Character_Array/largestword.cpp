#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;

    cout << "Enter length: ";
    cin >> n;
    cin.ignore();
    char arr[n + 1];

    cout << "Enter string: ";
    cin.getline(arr, n);
    cin.ignore();

    int i = 0;
    int currlen = 0, maxlen = 0;
    int st = 0, maxst = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i + 1;
        }
        else
        {
            currlen++;
        }

        if (arr[i] == '\0')
            break;
        i++;
    }

    cout << maxlen;
    for (int i = 0; i < maxlen; i++)
    {
        cout << arr[i + maxlen];
    }

    return 0;
}