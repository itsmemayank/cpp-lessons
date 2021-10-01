#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for (auto i : s)
        cout << i << " ";
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    cout << "Present or Not : " << s.count(3) << endl;

    set<int>::iterator itr = s.find(3);

    for (auto it = itr; it != s.end(); it++)
        cout << *it << " ";
    cout << endl;

    return 0;
}