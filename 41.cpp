//41. Write a constructor in c++ to input the two numbers and print the swaped values using 3rd variable using destructor
#include <iostream>
using namespace std;

class Swap
{
    int a, b, temp;

public:
    Swap()
    {
        cout << "Enter two numbers: ";
        cin >> a >> b;
    }

    ~Swap()
    {
        temp = a;
        a = b;
        b = temp;

        cout << "After Swapping:\n";
        cout << "a = " << a << endl;
        cout << "b = " << b;
    }
};

int main()
{
    Swap s;
    return 0;
}
