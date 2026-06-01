//54. Write a member function in c++ to input a number and check whether it is a krishnamurthy number or not.
#include <iostream>
using namespace std;

class Krishnamurthy
{
    int n;

public:
    void input()
    {
        cout << "Enter a number: ";
        cin >> n;
    }

    void check()
    {
        int temp = n, rem, sum = 0, fact, i;

        while(temp > 0)
        {
            rem = temp % 10;

            fact = 1;
            for(i = 1; i <= rem; i++)
                fact *= i;

            sum += fact;
            temp /= 10;
        }

        if(sum == n)
            cout << "Krishnamurthy Number";
        else
            cout << "Not a Krishnamurthy Number";
    }
};

int main()
{
    Krishnamurthy k;

    k.input();
    k.check();

    return 0;
}
