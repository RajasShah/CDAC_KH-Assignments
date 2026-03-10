#include <iostream>
using namespace std;

const float PI = 3.14159f;

float circleArea(float radius)
{
    return PI * radius * radius;
}

float circlePerimeter(float radius)
{
    return 2 * PI * radius;
}

int main()
{
    float radius = 7.0;

    cout << "Area: " << circleArea(radius) << endl;
    cout << "Perimeter: " << circlePerimeter(radius) << endl;

    // PI = 3.0f; 
    // ERROR: assignment of read-only variable 'PI'

    return 0;
}