//14. 14. Write a constructor in c++ to input the elements in an array and  print the smallest and largest element from that array  using the concept of constructor overloading
#include<iostream>
using namespace std;

class Array
{
    int a[20], n;

public:

    // Constructor to find largest element
    Array(int size)
    {
        n = size;

        cout << "Enter elements:\n";
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int large = a[0];

        for(int i = 1; i < n; i++)
        {
            if(a[i] > large)
                large = a[i];
        }

        cout << "Largest Element = " << large << endl;
    }

    // Overloaded constructor to find smallest element
    Array(int size, int)
    {
        n = size;

        cout << "Enter elements:\n";
        for(int i = 0; i < n; i++)
            cin >> a[i];

        int small = a[0];

        for(int i = 1; i < n; i++)
        {
            if(a[i] < small)
                small = a[i];
        }

        cout << "Smallest Element = " << small << endl;
    }
};

int main()
{
    int n;

    cout << "Enter size: ";
    cin >> n;

    Array obj1(n);      // Largest
    Array obj2(n, 0);   // Smallest

    return 0;
}
