#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;
    float marks;

public:

    // 1. Default Constructor
    Student()
    {
        rollNo = 0;
        name = "Unknown";
        marks = 0.0;
    }

    // 2 & 3. Parameterized Constructor using this pointer
    Student(int rollNo, string name, float marks)
    {
        this->rollNo = rollNo;
        this->name = name;
        this->marks = marks;
    }

    // Function to print student details
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        cout << "---------------------" << endl;
    }
};

int main()
{
    // Object using default constructor
    Student s1;

    // Objects using parameterized constructor
    Student s2(101, "Rajas", 85.5);
    Student s3(102, "Amit", 90.0);

    cout << "Student 1 (Default Constructor):\n";
    s1.display();

    cout << "Student 2:\n";
    s2.display();

    cout << "Student 3:\n";
    s3.display();

    return 0;
}