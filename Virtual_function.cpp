// WAP to demonstrate Function Overriding and Runtime Polymorphism

#include <iostream>
using namespace std;

// Base class
class Employee
{
public:
    virtual void work()   // Virtual function
    {
        cout << "Employee is working" << endl;
    }
};

// Derived class 1
class Manager : public Employee
{
public:
    void work() override
    {
        cout << "Manager is managing the team" << endl;
    }
};

// Derived class 2
class Developer : public Employee
{
public:
    void work() override
    {
        cout << "Developer is writing code" << endl;
    }
};

int main()
{
    Employee *ptr;   // Base class pointer

    Manager m;
    Developer d;

    // Runtime Polymorphism
    ptr = &m;
    ptr->work();

    ptr = &d;
    ptr->work();

    return 0;
}