#include <iostream>
using namespace std;

int main()
{
    int count = 0;

    while (count <= 10)
    {
        count++;
        if (count == 4)
        {
            continue;
        }
        if (count == 8)
        {
            break;
        }
        cout << count << endl;
    }

    return 0;
}
