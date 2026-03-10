#include <iostream>
using namespace std;

class Employee
{
private:
    const int employeeId;
    string name;
    float salary;

public:
    // Constructor using initializer list
    Employee(int id, string n, float s) : employeeId(id), name(n), salary(s)
    {
    }

    // Function to display details
    void display()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    Employee e1(101, "Rajas", 50000);
    Employee e2(102, "Amit", 60000);

    e1.display();
    e2.display();

    return 0;
}