//52. Write a member function in c++  to print the prime number from 1 to n using trial division approach.
#include <iostream>
using namespace std;

class Prime
{
    int n;

public:
    void input()
    {
        cout << "Enter n: ";
        cin >> n;
    }

    void display()
    {
        int i, j, flag;

        cout << "Prime Numbers are:\n";

        for(i = 2; i <= n; i++)
        {
            flag = 0;

            for(j = 2; j < i; j++)
            {
                if(i % j == 0)
                {
                    flag = 1;
                    break;
                }
            }

            if(flag == 0)
                cout << i << " ";
        }
    }
};

int main()
{
    Prime p;

    p.input();
    p.display();

    return 0;
}
