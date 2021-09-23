#include <bits/stdc++.h>
using namespace std;

class Parent
{
public:
    virtual void print()
    {
        cout << "Parent - Print Function" << endl;
    }
    void display()
    {
        cout << "Parent - Display Function" << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "Child - Print Function" << endl;
    }
    void display()
    {
        cout << "Child - Display Function" << endl;
    }
};

int main()
{
    Parent *p;
    Child c;

    p = &c;

    p->print();
    p->display();

    return 0;
}