//25. Write the functions in c++ to calculate cft and price from a wooden piece using menu using function overloading.
#include <iostream>
using namespace std;

class Wood
{
public:
    float calc(float l, float b, float h)   // CFT
    {
        return l * b * h;
    }

    float calc(float cft, float rate)       // Price
    {
        return cft * rate;
    }
};

int main()
{
    Wood w;
    int ch;
    float l, b, h, cft, rate;

    cout << "1. Calculate CFT\n";
    cout << "2. Calculate Price\n";
    cout << "Enter choice: ";
    cin >> ch;

    switch(ch)
    {
        case 1:
            cout << "Enter Length, Breadth and Height: ";
            cin >> l >> b >> h;
            cout << "CFT = " << w.calc(l, b, h);
            break;

        case 2:
            cout << "Enter CFT and Rate per CFT: ";
            cin >> cft >> rate;
            cout << "Price = " << w.calc(cft, rate);
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}
