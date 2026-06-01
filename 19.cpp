//19. Write the constructors in c++ to input the value of the radius and calculate and print the diameter,area and perimeter of the circle using the concept of multiple inheritance.

#include<iostream>
using namespace std;

class Radius
{
protected:
    float r;

public:
    Radius() {}
};

class Circle
{
protected:
    float d;
};

class Result : public Radius, public Circle
{
public:
    Result()
    {
        cout << "Enter Radius: ";
        cin >> r;

        d = 2 * r;

        cout << "Diameter = " << d << endl;
        cout << "Area = " << 3.14 * r * r << endl;
        cout << "Perimeter = " << 2 * 3.14 * r << endl;
    }
};

int main()
{
    Result obj;

    return 0;
}
