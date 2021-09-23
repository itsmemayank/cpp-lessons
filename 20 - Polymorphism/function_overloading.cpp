

#include <bits/stdc++.h>
using namespace std;

class Arguments
{
public:
    void func()
    {
        cout << "Func with no arguments\n";
    }

    void func(int x)
    {
        cout << "Func with int arguments\n";
    }

    void func(double y)
    {
        cout << "Func with double arguments\n";
    }
};

int main()
{
    Arguments obj;

    obj.func();
    obj.func(4);
    obj.func(3.5);

    return 0;
}