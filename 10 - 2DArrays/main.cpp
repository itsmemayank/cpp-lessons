#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows: ";
    cin >> n;
    cout << "Enter columns: ";
    cin >> m;

    int numbers[n][m];

    cout << "Enter " << n * m << " numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> numbers[i][j];
        }
    }

    cout << "\nMatrix is: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << numbers[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}