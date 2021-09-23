// Spiral Order Matrix Traversal

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows: ";
    cin >> n;
    cout << "Enter columns: ";
    cin >> m;

    int arr[n][m];

    cout << "Enter " << n * m << " numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_start = 0, row_end = n - 1, col_start = 0, col_end = m - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // Top
        for (int i = col_start; i <= col_end; i++)
        {
            cout << arr[row_start][i] << " ";
        }

        row_start++;

        // Left
        for (int j = row_start; j <= row_end; j++)
        {
            cout << arr[j][col_end] << " ";
        }

        col_end--;

        // Bottom
        for (int k = col_end; k >= col_start; k--)
        {
            cout << arr[row_end][k] << " ";
        }

        row_end--;

        // Right
        for (int l = row_end; l >= row_start; l--)
        {
            cout << arr[l][col_start] << " ";
        }

        col_start++;
    }

    return 0;
}