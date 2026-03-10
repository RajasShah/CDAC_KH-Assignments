#include <iostream>
using namespace std;

// Swap by Value
void swapByValue(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByValue: a=" << a << " b=" << b << endl;
}

// Swap by Address (Pointer)
void swapByAddress(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swapByAddress: a=" << *a << " b=" << *b << endl;
}

// Swap by Reference
void swapByReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapByReference: a=" << a << " b=" << b << endl;
}

int main()
{
    int x = 10, y = 20;

    cout << "Original values: x=" << x << " y=" << y << endl;

    // Swap by value
    swapByValue(x, y);
    cout << "After swapByValue: x=" << x << " y=" << y << endl;

    // Swap by address
    swapByAddress(&x, &y);
    cout << "After swapByAddress: x=" << x << " y=" << y << endl;

    // Swap by reference
    swapByReference(x, y);
    cout << "After swapByReference: x=" << x << " y=" << y << endl;

    return 0;
}