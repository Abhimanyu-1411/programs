//25. Write the functions in c++ to calculate cft and price from a wooden piece using menu using function overloading.
#include <iostream>
using namespace std;

class Wood
{
public:
    float calc(float l, float b, float h)
    {
        return l * b * h;
    }

    float calc(float cft, float rate)
    {
        return cft * rate;
    }
};

int main()
{
    Wood w;
    float l, b, h, cft = 0, rate, price;
    int ch = 0;

    while(ch != 3)
    {
        cout << "\n1. Calculate CFT";
        cout << "\n2. Calculate Price";
        cout << "\n3. Exit";
        cout << "\nEnter Choice: ";
        cin >> ch;

        switch(ch)
        {
            case 1:
                cout << "Enter Length, Breadth and Height: ";
                cin >> l >> b >> h;

                cft = w.calc(l, b, h);
                cout << "CFT = " << cft << endl;
                break;

            case 2:
                cout << "Enter Rate per CFT: ";
                cin >> rate;

                price = w.calc(cft, rate);
                cout << "Price = " << price << endl;
                break;

            case 3:
                cout << "Exiting...";
                break;

            default:
                cout << "Invalid Choice";
        }
    }

    return 0;
}
