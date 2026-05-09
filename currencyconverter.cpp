#include <iostream>
using namespace std;

class RupeeToDollar
{
private:
    float rupees, dollars;

public:
    void convert()
    {
        cout << "Enter Amount in Rupees: ";
        cin >> rupees;
        dollars = rupees / 83.0;
        cout << "Converted Amount in Dollars = "
             << dollars << endl;
    }
};
class DollarToRupee
{
private:
    float dollars, rupees;

public:
    void convert()
    {
        cout << "Enter Amount in Dollars: ";
        cin >> dollars;
        rupees = dollars * 83.0;
        cout << "Converted Amount in Rupees = "
             << rupees << endl;
    }
};

int main()
{
    int choice;
    cout << "====== Currency Converter ======" << endl;
    cout << "1. Rupee to Dollar" << endl;
    cout << "2. Dollar to Rupee" << endl;
    cout << "\nEnter Your Choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
        {
            RupeeToDollar r;
            r.convert();
            break;
        }

        case 2:
        {
            DollarToRupee d;
            d.convert();
            break;
        }

        default:
            cout << "Invalid Choice!" << endl;
    }
    return 0;
}
