#include <iostream>
using namespace std;

int main()
{
    int num = 10;      // integer variable

    int *ptr = &num;   // pointer to num
    int &ref = num;    // reference to num

    cout << "Initial value of num: " << num << endl;

    // Modify using pointer
    *ptr = 20;
    cout << "After modification using pointer: " << num << endl;

    // Modify using reference
    ref = 30;
    cout << "After modification using reference: " << num << endl;

    return 0;
}