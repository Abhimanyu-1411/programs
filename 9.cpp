//9. Write a member function in c++ to input a term and print the multiplication table of that term where input message is printed in underline
#include <iostream>
using namespace std;

class Table
{
    int n;

public:
    void input()
    {
        cout << "\033[4mEnter a Number:\033[0m ";
        cin >> n;
    }

    void display()
    {
        for(int i = 1; i <= 10; i++)
        {
            cout << n << " x " << i
                 << " = " << n * i << endl;
        }
    }
};

int main()
{
    Table t;

    t.input();
    t.display();

    return 0;
}
