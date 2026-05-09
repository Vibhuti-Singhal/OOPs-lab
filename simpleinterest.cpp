#include <iostream>
using namespace std;

class Interest {
public:
    
    float simpleInterest(float principal, float rate = 5, float time = 1) {
        return (principal * rate * time) / 100;
    }
};

int main() {
    Interest obj;
    float p, r, t;

    cout << "Enter Principal Amount: ";
    cin >> p;

    // Using default values of rate and time
    cout << "Simple Interest (default rate=5% and time=1 year): "
         << obj.simpleInterest(p) << endl;

    cout << "\nEnter Rate and Time: ";
    cin >> r >> t;

    // Using user-defined values
    cout << "Simple Interest (user-defined values): "
         << obj.simpleInterest(p, r, t) << endl;

    return 0;
}
