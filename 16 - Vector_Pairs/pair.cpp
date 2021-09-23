#include <bits/stdc++.h>
using namespace std;

bool myComparator(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}

int main()
{
    int arr[] = {10, 16, 7, 14, 5, 3, 2, 9};
    vector<pair<int, int>> vec;

    for (int i = 0; i < (sizeof(arr) / sizeof(arr[0])); i++)
        vec.push_back(make_pair(arr[i], i));

    sort(vec.begin(), vec.end(), myComparator);

    for (int i = 0; i < vec.size(); i++)
        arr[vec[i].second] = 1;

    for (int i = 0; i < vec.size(); i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}