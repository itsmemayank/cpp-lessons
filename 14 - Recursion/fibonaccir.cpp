// Fibonacci

#include <bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if (n == 0 || n == 1)
        return n;

    int prevFibo = fibo(n - 1);
    int prevPrevFibo = fibo(n - 2);

    return prevFibo + prevPrevFibo;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    printf("Result : %d\n", fibo(n));

    return 0;
}