//15.Write a dynamic constructor in c++ to input a term and print the factorial of that term.
#include<iostream>
using namespace std;

class Fact
{
    int *n;

public:
    // Dynamic Constructor
    Fact(int x)
    {
        n = new int;   // dynamic memory allocation
        *n = x;
    }

    void factorial()
    {
        int f = 1;

        for(int i = 1; i <= *n; i++)
        {
            f *= i;
        }

        cout << "Factorial = " << f;
    }

    ~Fact()
    {
        delete n;
    }
};

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    Fact obj(x);

    obj.factorial();

    return 0;
}
