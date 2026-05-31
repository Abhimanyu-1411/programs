// 34.Write the constructor in c++ to input a term and check whether it is an armstrong number or not using the concept of single inheritance.
#include <iostream>
using namespace std;

class Number
{
protected:
    int n;

public:
    Number()
    {
        cout << "Enter a number: ";
        cin >> n;
    }
};

class Armstrong : public Number
{
public:
    Armstrong()
    {
        int temp = n, rem, sum = 0;

        while(temp > 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }

        if(sum == n)
            cout << "Armstrong Number";
        else
            cout << "Not an Armstrong Number";
    }
};

int main()
{
    Armstrong a;
    return 0;
}
