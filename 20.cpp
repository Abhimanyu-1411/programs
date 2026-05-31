//Write a program in c++ to input the values of numerator and denominator and check if denominator is zero exception is caught and print using exception handling otherwise it print the quotient.

#include<iostream>
using namespace std;

int main()
{
    int num, den;
    float q;

    cout << "Enter Numerator and Denominator: ";
    cin >> num >> den;

    try
    {
        if(den == 0)
            throw den;

        q = (float)num / den;

        cout << "Quotient = " << q;
    }

    catch(int)
    {
        cout << "Exception Caught: Denominator cannot be zero";
    }

    return 0;
}
