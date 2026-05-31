//32. Write a program in c++ to input a decimal number and print the binary equivalent of that number with operator overloading.
#include <iostream>
using namespace std;

class Binary
{
    int n;

public:
    void get()
    {
        cout << "Enter a decimal number: ";
        cin >> n;
    }

    void operator~()
    {
        int bin[20], i = 0, num = n;

        while(num > 0)
        {
            bin[i] = num % 2;
            num = num / 2;
            i++;
        }

        cout << "Binary Equivalent = ";

        for(int j = i - 1; j >= 0; j--)
            cout << bin[j];
    }
};

int main()
{
    Binary b;
    b.get();

    ~b;   // Operator Overloading

    return 0;
}
