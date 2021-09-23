#include <bits/stdc++.h>
using namespace std;

class Encapsulation
{
private:
    string name;
    int age;

public:
    void setName(string n)
    {
        name = n;
    }

    void setAge(int a)
    {
        age = a;
    }

    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Encapsulation obj;

    obj.setName("John");
    obj.setAge(20);

    cout << obj.getName() << endl;
    cout << obj.getAge() << endl;

    return 0;
}