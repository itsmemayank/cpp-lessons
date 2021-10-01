#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> max;                            // Max Heap
    priority_queue<int, vector<int>, greater<int>> min; // Min Heap

    max.push(1);
    max.push(2);
    max.push(3);
    max.push(4);

    int n1 = max.size();

    for (int i = 0; i < n1; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }

    cout << endl;

    cout << "Empty or Not : " << max.empty() << endl;

    /************************************************/
    min.push(1);
    min.push(2);
    min.push(3);
    min.push(4);

    int n2 = min.size();

    for (int i = 0; i < n2; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }

    cout << endl;

    cout << "Empty or Not : " << min.empty() << endl;

    return 0;
}