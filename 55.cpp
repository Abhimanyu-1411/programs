//55. Write the program in c++ input the values of base and exponent and print the power that term  without using predefined function..
#include <iostream>
using namespace std;

int main()
{
    int base, exp, i;
    long long power = 1;

    cout << "Enter Base: ";
    cin >> base;

    cout << "Enter Exponent: ";
    cin >> exp;

    for(i = 1; i <= exp; i++)
    {
        power = power * base;
    }

    cout << "Power = " << power;

    return 0;
}
