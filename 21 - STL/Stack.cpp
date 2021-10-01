#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<string> sta;

    sta.push("One");
    sta.push("Two");
    sta.push("Three");

    cout << "Top Element : " << sta.top() << endl;

    sta.pop();

    cout << "Top Element : " << sta.top() << endl;

    cout << "Size : " << sta.size() << endl;

    cout << "Empty or Not : " << sta.empty() << endl;

    return 0;
}