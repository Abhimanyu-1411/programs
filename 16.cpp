//16.Write a dynamic constructor in c++ to input a term and print the multiplication table of that term.
#include<iostream>
using namespace std;

class Table
{
    int *n;

public:

    // Dynamic Constructor
    Table(int x)
    {
        n = new int;
        *n = x;
    }

    void display()
    {
        cout << "Multiplication Table of " << *n << endl;

        for(int i = 1; i <= 10; i++)
        {
            cout << *n << " x " << i
                 << " = " << (*n) * i << endl;
        }
    }

    ~Table()
    {
        delete n;
    }
};

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    Table obj(x);

    obj.display();

    return 0;
}
