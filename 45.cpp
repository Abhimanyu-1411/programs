//45. Write the member functions in c++ to input the value of the radius and print the area of the circle using virtual function or late binding.
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void area()
    {
        cout << "Area Function";
    }
};

class Circle : public Base
{
    float r;

public:
    void area()
    {
        cout << "Enter Radius: ";
        cin >> r;

        cout << "Area of Circle = " << 3.14 * r * r;
    }
};

int main()
{
    Base *ptr;
    Circle c;

    ptr = &c;

    ptr->area();   // Late Binding

    return 0;
}
