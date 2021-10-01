#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> que;

    que.push("One");
    que.push("Two");
    que.push("Three");

    cout << "Top Element : " << que.front() << endl;

    que.pop();

    cout << "Top Element : " << que.front() << endl;

    cout << "Size : " << que.size() << endl;

    cout << "Empty or Not : " << que.empty() << endl;

    return 0;
}