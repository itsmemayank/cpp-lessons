#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> v1;

    v1.push_back(5);
    v1.push_back(3);
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(2);

    // Using Loops
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    // Using Iterators
    vector<int>::iterator it;
    for (it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";
    cout << endl;

    v1.pop_back();

    vector<int> v2(3, 50);

    swap(v1, v2); // Swapping

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << endl;

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    sort(v2.begin(), v2.end()); // Sorting

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
    cout << endl;

    return 0;
}