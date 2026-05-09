#include <iostream>
using namespace std;
class Employee
{
private:
    int empId;
    string empName;
    float salary;
    static int totalEmployees;
public:
    Employee(int id, string name, float sal)
    {
        empId = id;
        empName = name;
        salary = sal;
        totalEmployees++;
    }
    void display()
    {
        cout << "Employee ID : " << empId << endl;
        cout << "Employee Name : " << empName << endl;
        cout << "Salary : " << salary << endl;
    }
    static void showTotalEmployees()
    {
        cout << "\nTotal Employees = " << totalEmployees << endl;
    }
};
int Employee::totalEmployees = 0;
int main()
{
    Employee e1(1, "Rahul", 35000);
    Employee e2(2, "Simran", 42000);
    Employee e3(3, "Amit", 50000);

    cout << "\nEmployee 1 Details:\n";
    e1.display();

    cout << "\nEmployee 2 Details:\n";
    e2.display();

    cout << "\nEmployee 3 Details:\n";
    e3.display();
    Employee::showTotalEmployees();
    return 0;
}

