//11. Wite a member function in c++ to sort the elements using bubble sorting with function overriding.
#include<iostream>
using namespace std;

class Base
{
protected:
    int a[10], n;

public:
    void getdata()
    {
        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter elements: ";
        for(int i = 0; i < n; i++)
            cin >> a[i];
    }

    virtual void sort()
    {
        cout << "Base Class Sort\n";
    }
};

class Derived : public Base
{
public:
    void sort()
    {
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - i - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        cout << "Sorted Elements:\n";
        for(int i = 0; i < n; i++)
            cout << a[i] << " ";
    }
};

int main()
{
    Derived d;

    d.getdata();
    d.sort();

    return 0;
}
