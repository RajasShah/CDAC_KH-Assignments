#include <iostream>
#include <fstream>
using namespace std;

class Student {
    int roll;
    string name;
    float marks;

public:
    Student(int r = 0, string n = "", float m = 0) {
        roll = r;
        name = n;
        marks = m;
    }

    void input() {
        cin >> roll >> name >> marks;
    }

    void display() {
        cout << roll << " " << name << " " << marks << endl;
    }

    void writeToFile(ofstream &f) {
        f << roll << " " << name << " " << marks << endl;
    }

    ~Student() {
        cout << "Destroying student " << name << endl;
    }
};

int main() {

    Student s[3];

    for(int i=0;i<3;i++) {
        cout<<"Enter student details: ";
        s[i].input();
    }

    ofstream fout("students.txt");

    for(int i=0;i<3;i++)
        s[i].writeToFile(fout);

    fout.close();

    ifstream fin("students.txt");

    cout<<"\nFile contents:\n";

    int roll;
    string name;
    float marks;

    while(fin>>roll>>name>>marks)
        cout<<roll<<" "<<name<<" "<<marks<<endl;

    fin.close();
}