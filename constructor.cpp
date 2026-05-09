#include <iostream>
using namespace std;

class Demo
{
private:
    int num;

public:

    // Default Constructor
    Demo()
    {
        num = 0;
        cout << "Default Constructor Called" << endl;
        cout << "Value of num: " << num << endl;
    }

    // Parameterized Constructor
    Demo(int x)
    {
        num = x;
        cout << "\nParameterized Constructor Called" << endl;
        cout << "Value of num: " << num << endl;
    }

    // Copy Constructor
    Demo(const Demo &obj)
    {
        num = obj.num;
        cout << "\nCopy Constructor Called" << endl;
        cout << "Copied Value of num: " << num << endl;
    }

    // Overloaded Constructor
    Demo(int a, int b)
    {
        num = a + b;
        cout << "\nOverloaded Constructor Called" << endl;
        cout << "Sum of two numbers: " << num << endl;
    }

    // Display Function
    void display()
    {
        cout << "Current Value: " << num << endl;
    }
};

int main()
{
    // Default constructor
    Demo d1;

    // Parameterized constructor
    Demo d2(50);

    // Copy constructor
    Demo d3(d2);

    // Overloaded constructor
    Demo d4(20, 30);

    return 0;
}