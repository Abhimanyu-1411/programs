//35. Write a program  in c++ to print the sum of nth terms using static data members with static member functions.
//
#include <iostream>
using namespace std;

class Sum
{
    static int n;

public:
    static void input()
    {
        cout << "Enter n: ";
        cin >> n;
    }

    static void display()
    {
        int sum = n * (n + 1) / 2;
        cout << "Sum = " << sum;
    }
};

int Sum::n;

int main()
{
    Sum::input();
    Sum::display();

    return 0;
}
