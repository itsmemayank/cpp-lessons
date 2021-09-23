#include <bits/stdc++.h>
using namespace std;

class Student // Class
{
public:          // Access Modifier
    string name; // Variables
    int age;

    Student(string a, int b) // Constructor
    {
        name = a;
        age = b;
    }

    void details() // Method
    {
        cout << name << " - " << age << endl;
    }
};

int main()
{
    Student s1("John", 21); // Class Instantiation
    s1.details();

    Student s2("Jane", 20);
    s2.details(); // Method Call

    return 0;
}