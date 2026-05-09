#include <iostream>
using namespace std;

class Engine
{
    int horsepower;

public:
    Engine(int hp){
        horsepower = hp;
    }

    void showEngine(){
        cout << "Engine Horsepower: " << horsepower << " HP" << endl;
    }
};

// Car class contains Engine object
class Car
{
    string carName;
    Engine engine;   // Containership
public:
    Car(string name, int hp) : engine(hp){
        carName = name;
    }

    void display(){
        cout << "Car Name: " << carName << endl;
        engine.showEngine();
    }
};

int main()
{
    Car c1("BMW", 300);

    c1.display();

    return 0;
}
