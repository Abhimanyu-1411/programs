10. Write C++ function to convert binary number into decimal equivalent term.

#include<iostream>
using namespace std;

int binaryToDecimal(long int bin)
{
    int dec = 0, base = 1, rem;

    while(bin > 0)
    {
        rem = bin % 10;
        dec += rem * base;
        base *= 2;
        bin /= 10;
    }

    return dec;
}

int main()
{
long int bin;
cin>>bin;
cout<<binaryToDecimal(bin);
}
