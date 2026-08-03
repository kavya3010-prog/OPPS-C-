#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
public:
    void area(float b, float h)      // Right angle triangle
    {
        cout << "Area = " << 0.5 * b * h << endl;
    }

    void area(float s)               // Equilateral triangle
    {
        cout << "Area = " << (1.732 * s * s) / 4 << endl;
    }

    void area(double s, double b)    // Isosceles triangle
    {
        double h = sqrt(s * s - (b * b) / 4);
        cout << "Area = " << 0.5 * b * h << endl;
    }
};

int main()
{
    Triangle t;
    float b, h, side;
    double s, base;

    cout << "Enter base and height of right triangle: ";
    cin >> b >> h;
    t.area(b, h);

    cout << "Enter side of equilateral triangle: ";
    cin >> side;
    t.area(side);

    cout << "Enter equal side and base of isosceles triangle: ";
    cin >> s >> base;
    t.area(s, base);

    return 0;
}
