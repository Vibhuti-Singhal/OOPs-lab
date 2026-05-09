#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:

    // Constructor
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    // Overloading + operator
    Complex operator +(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overloading - operator
    Complex operator -(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overloading ++ operator
    Complex operator ++()
    {
        ++real;
        ++imag;
        return *this;
    }

    // Overloading == operator
    bool operator ==(Complex c)
    {
        return (real == c.real && imag == c.imag);
    }

    // Overloading << operator
    friend ostream& operator <<(ostream &out, Complex c);
};

// Definition of << operator
ostream& operator <<(ostream &out, Complex c)
{
    out << c.real << " + " << c.imag << "i";
    return out;
}

int main()
{
    Complex c1(4, 5), c2(2, 3), c3;

    // + operator
    c3 = c1 + c2;
    cout << "Addition: " << c3 << endl;

    // - operator
    c3 = c1 - c2;
    cout << "Subtraction: " << c3 << endl;

    // ++ operator
    ++c1;
    cout << "After Increment: " << c1 << endl;

    // == operator
    if (c1 == c2)
        cout << "Both complex numbers are equal" << endl;
    else
        cout << "Both complex numbers are not equal" << endl;

    return 0;
}