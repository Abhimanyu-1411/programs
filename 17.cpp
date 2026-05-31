//17. Write a program in c++ to input a term and print the binary equivalent of that term without using main function
#include<iostream>
#define decibin main
using namespace std;

int decibin()
{
    int n, bin[20], i = 0;

    cout << "Enter Decimal Number: ";
    cin >> n;

    while(n > 0)
    {
        bin[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary Equivalent = ";

    for(i = i - 1; i >= 0; i--)
    {
        cout << bin[i];
    }

    return 0;
}
