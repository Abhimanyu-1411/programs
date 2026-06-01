//46. Write the member functions in c++ to input the number of elements in an array and print the reverse sequence of that input elements  using virtual function or late binding.
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display()
    {
        cout << "Base Class";
    }
};

class Reverse : public Base
{
    int a[100], n;

public:
    void display()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements:\n";
        for(int i = 0; i < n; i++)
            cin >> a[i];

        cout << "Reverse Sequence:\n";

        for(int i = n - 1; i >= 0; i--)
            cout << a[i] << " ";
    }
};

int main()
{
    Base *ptr;
    Reverse r;

    ptr = &r;

    ptr->display();    // Late Binding

    return 0;
}
