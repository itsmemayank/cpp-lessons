#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n;
    int maxnum = INT_MIN;
    int minnum = INT_MAX;
    int array[n];

    cout << maxnum << endl; // Integer's Smallest Num
    cout << minnum << endl; // Integer's Largest Num

    cout << "Enter no: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int val;
        cout << "Enter " << i << " no: ";
        cin >> val;
        array[i] = val;
    }

    for (int i = 0; i < n; i++)
    {
        maxnum = max(maxnum, array[i]);
        minnum = min(minnum, array[i]);
    }

    cout << "Max Num: " << maxnum << endl;
    cout << "Min Num: " << minnum << endl;

    return 0;
}