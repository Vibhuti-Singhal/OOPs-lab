#include <iostream>
using namespace std;

class Arithmetic {
public:
    // Inline member functions
    inline int add(int a, int b) {
        return a + b;
    }

    inline int subtract(int a, int b) {
        return a - b;
    }

    inline int multiply(int a, int b) {
        return a * b;
    }

    inline float divide(int a, int b) {
        if (b != 0)
            return (float)a / b;
        else {
            cout << "Division by zero is not possible." << endl;
            return 0;
        }
    }
};

int main() {
    Arithmetic obj;
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << obj.add(x, y) << endl;
    cout << "Subtraction: " << obj.subtract(x, y) << endl;
    cout << "Multiplication: " << obj.multiply(x, y) << endl;
    cout << "Division: " << obj.divide(x, y) << endl;

    return 0;
}