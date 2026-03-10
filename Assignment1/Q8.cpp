#include <iostream>
using namespace std;

int absolute(int n)
{
    return (n < 0) ? -n : n;
}

int clamp(int val, int lo, int hi)
{
    return (val < lo) ? lo : (val > hi) ? hi : val;
}

int main()
{
    cout << "val lo hi absolute(val) clamp(val,lo,hi)" << endl;

    cout << "-15 -10 10 "
         << absolute(-15) << " "
         << clamp(-15, -10, 10) << endl;

    cout << "0 -10 10 "
         << absolute(0) << " "
         << clamp(0, -10, 10) << endl;

    cout << "25 -10 10 "
         << absolute(25) << " "
         << clamp(25, -10, 10) << endl;

    cout << "-3 0 5 "
         << absolute(-3) << " "
         << clamp(-3, 0, 5) << endl;

    return 0;
}