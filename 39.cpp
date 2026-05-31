//39. Write a member function in c++ to input a term and print the sum of the digit of that term
#include <iostream>
using namespace std;

class SumDigit
{
    int n;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void display()
    {
        int sum = 0, rem, temp;

        temp = n;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }

        cout << "Sum of digits = " << sum;
    }
};

int main()
{
    SumDigit s;

    s.input();
    s.display();

    return 0;
}
