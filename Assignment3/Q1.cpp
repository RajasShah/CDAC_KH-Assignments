#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    mutable int accessCount;

public:
    Employee(int i, string n) {
        id = i;
        name = n;
        accessCount = 0;
    }

    // User-defined copy constructor
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        accessCount = e.accessCount;
        cout << "User-defined copy constructor called\n";
    }

    const void display() {
        accessCount++;
        cout << "ID: " << id << " Name: " << name
             << " AccessCount: " << accessCount << endl;
    }
};

int main() {
    Employee e1(101, "Rajas");

    e1.display();
    e1.display();

    Employee e2 = e1;   // copy constructor called

    e2.display();

    return 0;
}