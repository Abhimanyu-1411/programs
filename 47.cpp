//47. Write a program in c++ to input a term and print the the following pattern using virtual base class
//n=5 ***** **** *** ** *
#include <iostream>
using namespace std;

class A
{
protected:
    int n;

public:
    void input()
    {
        cout << "Enter n: ";
        cin >> n;
    }
};

class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
public:
    void pattern()
    {
        for(int i = n; i >= 1; i--)
        {
            for(int j = 1; j <= i; j++)
                cout << "*";

            cout << endl;
        }
    }
};

int main()
{
    D obj;

    obj.input();
    obj.pattern();

    return 0;
}
