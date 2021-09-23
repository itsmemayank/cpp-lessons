// Recursive Sum

#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;

    int prevSum = sum(n - 1);
    return n + prevSum;
}

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    cout << "Result : " << sum(n) << endl;

    return 0;
}