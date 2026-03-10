#include <iostream>
using namespace std;

void findMinMax(int a, int b, int c, int &minVal, int &maxVal);
int main()
{
    int lo, hi;

    int x = 10, y = 25, z = 5;

    findMinMax(x, y, z, lo, hi);

    cout << "Minimum value: " << lo << endl;
    cout << "Maximum value: " << hi << endl;

    return 0;
}
void findMinMax(int a, int b, int c, int &minVal, int &maxVal)
{
    minVal = a;
    maxVal = a;

    if (b < minVal)
        minVal = b;
    if (c < minVal)
        minVal = c;

    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;
}