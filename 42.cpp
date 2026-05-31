//42. Write the template function to input a number and check whether it is an odd number or even number
#include <iostream>
using namespace std;

template <class T>
void check(T n)
{
    if(n % 2 == 0)
        cout << "Even Number";
    else
        cout << "Odd Number";
}

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    check(n);

    return 0;
}
