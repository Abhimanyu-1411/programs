//13. Write a constructor in c++ to swap the values of two input numbers with a third variable and without using 3rd variable using the concept of constructor overloading.
#include<iostream>
using namespace std;

class Swap
{
    int a, b;

public:

    // Constructor with third variable
    Swap(int x, int y)
    {
        a = x;
        b = y;

        int temp;
        temp = a;
        a = b;
        b = temp;

        cout << "\nUsing Third Variable:\n";
        cout << "a = " << a << " b = " << b << endl;
    }

    // Overloaded Constructor without third variable
    Swap(int x, int y, int)
    {
        a = x;
        b = y;

        a = a + b;
        b = a - b;
        a = a - b;

        cout << "\nWithout Third Variable:\n";
        cout << "a = " << a << " b = " << b << endl;
    }
};

int main()
{
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    Swap s1(x, y);      // Constructor with third variable

    Swap s2(x, y, 0);   // Constructor without third variable

    return 0;
}
