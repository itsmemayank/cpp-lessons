#include <iostream>
using namespace std;

int main()
{
    char str[20] = "c plus plus";
    int i = 0;
    while (str[i] != '\0')
    {
        cout << str[i] << endl;
        i++;
    }
    return 0;
}