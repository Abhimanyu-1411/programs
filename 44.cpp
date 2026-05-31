//44. Write the template class to input the radius of the circle and side of the Rhombous and print the perimeter of circle and Rhombous using template class overloading.
#include <iostream>
using namespace std;

template <class T>
class Circle
{
    T r;

public:
    Circle(T x)
    {
        r = x;
    }

    void display()
    {
        cout << "Perimeter of Circle = " << 2 * 3.14 * r << endl;
    }
};

template <class T>
class Rhombus
{
    T s;

public:
    Rhombus(T x)
    {
        s = x;
    }

    void display()
    {
        cout << "Perimeter of Rhombus = " << 4 * s << endl;
    }
};

int main()
{
    float r, s;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "Enter side of rhombus: ";
    cin >> s;

    Circle<float> c(r);
    Rhombus<float> rh(s);

    c.display();
    rh.display();

    return 0;
}


// template fucntion overloading
#include <iostream>
using namespace std;

template<class X>
void fun(X r)
{
    double p;
    cout << "Enter Radius: ";
    cin >> r;

    p = 2 * 3.14 * r;

    cout << "Perimeter of Circle = " << p << endl;
}

template<class X, class Y>
void fun(X s, Y c)
{
    cout << "Enter Side of Rhombus: ";
    cin >> s;

    c = 4 * s;

    cout << "Perimeter of Rhombus = " << c << endl;
}

int main()
{
    int r1, s1, c1;

    fun(r1);        // Calls first template
    fun(s1, c1);    // Calls second template

    return 0;
}
