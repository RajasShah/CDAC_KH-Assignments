#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    float total, percentage;
    char grade;

    cout << "Enter marks for 5 subjects:\n";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    grade = (percentage >= 75) ? 'A' :
            (percentage >= 60) ? 'B' :
            (percentage >= 45) ? 'C' : 'F';

    cout << "\nSubject Marks:\n";
    cout << "Subject 1: " << m1 << endl;
    cout << "Subject 2: " << m2 << endl;
    cout << "Subject 3: " << m3 << endl;
    cout << "Subject 4: " << m4 << endl;
    cout << "Subject 5: " << m5 << endl;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Percentage = " << percentage << "%" << endl;

    cout << "Grade = " << (grade == 'F' ? "Fail" : string(1, grade)) << endl;

    return 0;
}