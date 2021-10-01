#include <bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> deq;

    deq.push_front(1);
    deq.push_front(2);
    deq.push_back(3);
    deq.push_back(4);

    for (int i : deq)
    {
        cout << i << " ";
    }

    cout << endl;

    deq.pop_front();
    deq.pop_back();

    for (int i : deq)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "Element at 1st Index : " << deq.at(1) << endl;
    cout << "Empty or Not : " << deq.empty() << endl;
    cout << "First Element : " << deq.front() << endl;
    cout << "Last Element : " << deq.back() << endl;

    cout << "Before Erase : " << deq.size() << endl;
    deq.erase(deq.begin(), deq.begin() + 1);
    cout << "After Erase : " << deq.size() << endl;

    for (int i : deq)
    {
        cout << i << " ";
    }

    cout << endl;

    return 0;
}