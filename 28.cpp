//28.Write the class template to print the largest of 3 different input integer numbers and float numbers using ternary operators.
#include <iostream>
using namespace std;

template <class T>
class Largest
{
    T a, b, c;

public:
    Largest(T x, T y, T z)
    {
        a = x;
        b = y;
        c = z;
    }

    void show()
    {
        T max;
        max = (a > b) ? ((a > c) ? a : c)
                      : ((b > c) ? b : c);

        cout << "Largest = " << max << endl;
    }
};

int main()
{
    Largest<int> i(10, 25, 15);
    Largest<float> f(2.5, 7.8, 4.3);

    i.show();
    f.show();

    return 0;
}
