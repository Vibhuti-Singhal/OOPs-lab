#include <iostream>
using namespace std;

/* ---------------- SINGLE INHERITANCE ---------------- */

class Animal {
public:
    void eat() {
        cout << "Animal eats food" << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

/* ---------------- MULTIPLE INHERITANCE ---------------- */

class Father {
public:
    void fatherQuality() {
        cout << "Father is hardworking" << endl;
    }
};

class Mother {
public:
    void motherQuality() {
        cout << "Mother is caring" << endl;
    }
};

class Child : public Father, public Mother {
public:
    void childQuality() {
        cout << "Child inherits qualities" << endl;
    }
};

/* ---------------- MULTILEVEL INHERITANCE ---------------- */

class Grandparent {
public:
    void grandparentProperty() {
        cout << "Grandparent property received" << endl;
    }
};

class Parent : public Grandparent {
public:
    void parentProperty() {
        cout << "Parent property received" << endl;
    }
};

class Son : public Parent {
public:
    void sonProperty() {
        cout << "Son property received" << endl;
    }
};

/* ---------------- HIERARCHICAL INHERITANCE ---------------- */

class Shape {
public:
    void shapeInfo() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape {
public:
    void circleInfo() {
        cout << "Circle has radius" << endl;
    }
};

class Rectangle : public Shape {
public:
    void rectangleInfo() {
        cout << "Rectangle has length and breadth" << endl;
    }
};

/* ---------------- HYBRID INHERITANCE ---------------- */

class Student {
public:
    void studentInfo() {
        cout << "Student information displayed" << endl;
    }
};

class Sports : public Student {
public:
    void sportsInfo() {
        cout << "Sports marks added" << endl;
    }
};

class Music {
public:
    void musicInfo() {
        cout << "Music activity added" << endl;
    }
};

class Result : public Sports, public Music {
public:
    void finalResult() {
        cout << "Final result prepared" << endl;
    }
};

/* ---------------- MAIN FUNCTION ---------------- */

int main() {

    cout << "===== SINGLE INHERITANCE =====" << endl;
    Dog d;
    d.eat();
    d.bark();

    cout << "\n===== MULTIPLE INHERITANCE =====" << endl;
    Child c;
    c.fatherQuality();
    c.motherQuality();
    c.childQuality();

    cout << "\n===== MULTILEVEL INHERITANCE =====" << endl;
    Son s;
    s.grandparentProperty();
    s.parentProperty();
    s.sonProperty();

    cout << "\n===== HIERARCHICAL INHERITANCE =====" << endl;
    Circle c1;
    Rectangle r;

    c1.shapeInfo();
    c1.circleInfo();

    cout << endl;

    r.shapeInfo();
    r.rectangleInfo();

    cout << "\n===== HYBRID INHERITANCE =====" << endl;
    Result res;
    res.studentInfo();
    res.sportsInfo();
    res.musicInfo();
    res.finalResult();

    return 0;
}