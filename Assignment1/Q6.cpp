#include <iostream>
using namespace std;

int main()
{
    int x = 10, y = 20, z = 30;

    int *px = &x;
    int *py = &y;
    int *pz = &z;

    cout << "Before swap:" << endl;
    cout << "x = " << *px << " y = " << *py << " z = " << *pz << endl;

    cout << "px = " << px << " py = " << py << " pz = " << pz << endl;

    int temp = *px;
    *px = *pz;
    *pz = temp;

    cout << "\nAfter swap:" << endl;
    cout << "x = " << *px << " y = " << *py << " z = " << *pz << endl;

    cout << "px = " << px << " py = " << py << " pz = " << pz << endl;

    return 0;
}