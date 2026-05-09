#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth, area;

public:

    // Constructor for dynamic initialization
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
        area = length * breadth;
    }

    // Display function
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Breadth: " << breadth << endl;
        cout << "Area    : " << area << endl;
    }
};

int main()
{
    int l, b;

    // User input
    cout << "Enter length: ";
    cin >> l;

    cout << "Enter breadth: ";
    cin >> b;

    // Dynamic initialization through constructor
    Rectangle r(l, b);

    // Display result
    cout << "\nRectangle Details:" << endl;
    r.display();

    return 0;
}