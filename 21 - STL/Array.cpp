#include <bits/stdc++.h>
using namespace std;

int main()
{
    array<int, 5> arr = {1, 2, 3, 4, 5};

    int size = arr.size();

    for (int i = 0; i < size; i++)
        cout << arr[i] << endl;

    cout << "Element at 2nd Index : " << arr.at(2) << endl;
    cout << "Empty or Not : " << arr.empty() << endl;
    cout << "First Element : " << arr.front() << endl;
    cout << "Last Element : " << arr.back() << endl;

    return 0;
}