//30. Write the constructors in c++ to input the term and generate the fibonacci series of that term using the concept of multilevel inheritance
///private members can be accessed only inside the same class.
///protected members can be accessed inside the class and its derived classes

#include <iostream>
using namespace std;

class A
{
protected:
    int n;

public:
    A()
    {
        cout << "Enter number of terms: ";
        cin >> n;
    }
};

class B : public A
{
protected:
    int a, b;

public:
    B()
    {
        a = 0;
        b = 1;
    }
};

class C : public B
{
public:
    C()
    {
        int c;

        cout << "Fibonacci Series:\n";

        for(int i = 1; i <= n; i++)
        {
            cout << a << " ";

            c = a + b;
            a = b;
            b = c;
        }
    }
};

int main()
{
    C obj;
    return 0;
}
