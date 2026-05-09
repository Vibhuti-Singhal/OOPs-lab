#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void area() = 0;
};
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle = "
             << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle = "<< length * breadth << endl;
    }
};

int main()
{
    Shape *ptr;

    Circle c(5);
    Rectangle r(4, 6);

    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}

