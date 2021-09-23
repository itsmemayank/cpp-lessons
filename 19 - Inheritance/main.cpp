// Multiple Inheritance

#include <bits/stdc++.h>
using namespace std;

class ParentA
{
public:
    void funcA()
    {
        cout << "Func of Parent A" << endl;
    }
};

class ParentB
{
public:
    void funcB()
    {
        cout << "Func of Parent B" << endl;
    }
};

class Child : public ParentA, public ParentB
{
public:
    void funcC()
    {
        cout << "Func of Child" << endl;
    }
};

int main()
{
    Child obj; // Object of Child

    obj.funcA(); // Accessing Parent A func
    obj.funcB(); // Accessing Parent B func
    obj.funcC(); // Accessing its own func

    return 0;
}