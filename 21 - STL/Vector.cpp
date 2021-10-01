#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    // vector<int> vec1(5, 1); // intializes all 5 with 1
    // vector<int> vec2(vec); // copying vec into vec2

    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(1);
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(2);
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(3);
    cout << "Capacity : " << vec.capacity() << endl;

    vec.push_back(3);
    cout << "Capacity : " << vec.capacity() << endl;

    cout << "Size : " << vec.size() << endl;

    vec.pop_back();

    for (int i : vec)
    {
        cout << i << endl;
    }

    cout << "Element at 2nd Index : " << vec.at(2) << endl;
    cout << "First Element : " << vec.front() << endl;
    cout << "Last Element : " << vec.back() << endl;

    cout << "Before Clear : " << vec.size() << endl;
    vec.clear();
    cout << "After Clear : " << vec.size() << endl;

    return 0;
}