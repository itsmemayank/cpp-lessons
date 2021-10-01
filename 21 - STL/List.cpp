#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> lis;

    lis.push_front(1);
    lis.push_front(2);
    lis.push_back(3);
    lis.push_back(4);

    for (int i : lis)
    {
        cout << i << ' ';
    }
    for (int i : lis)
    {
        cout << i << ' ';
    }

    cout << endl;

    lis.pop_front();
    lis.pop_back();

    for (int i : lis)
    {
        cout << i << ' ';
    }

    cout << endl;

    cout << "Empty or Not : " << lis.empty() << endl;
    cout << "First Element : " << lis.front() << endl;
    cout << "Last Element : " << lis.back() << endl;

    cout << "Before Erase : " << lis.size() << endl;
    lis.erase(lis.begin());
    cout << "After Erase : " << lis.size() << endl;

    return 0;
}