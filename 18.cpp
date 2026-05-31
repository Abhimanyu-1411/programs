//18. Write a constructor in c++ to input a term and print the factorial of that term using destructor.
#include<iostream>
using namespace std;

class Fact
{
    int n;

public:

    // Constructor
    Fact()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    // Destructor
    ~Fact()
    {
        int f = 1;

        for(int i = 1; i <= n; i++)
        {
            f *= i;
        }

        cout << "Factorial = " << f;
    }
};

int main()
{
    Fact obj;

    return 0;
}
