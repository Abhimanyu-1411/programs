//33. Write a program in c++ to input a number and check whether it is a prime number or not.
#include <iostream>
using namespace std;

int main()
{
    int n, i, flag = 0;

    cout << "Enter a number: ";
    cin >> n;

    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if(n <= 1)
        cout << "Not Prime";
    else if(flag == 0)
        cout << "Prime Number";
    else
        cout << "Not Prime";

    return 0;
}
