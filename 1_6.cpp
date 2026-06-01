//1-6
//1. Write a program in c++ to input the value of dividend and divisor and print the quotient and remainder.
//2. Write an OOP in c++ to input a number and print the reverse of that number.
//3. Write a function in c++ to input a term and print the sum of the digit of that term.
//4. Write an OOP in c++ to print the sum of the following fractional series 1+1/2+1/3+1/4....1/n after the input nth values.
//5. Write a member function in c++ to implement the uses of this pointer.
//6. Write a function in c++ to print the sum of the following fractional series 1+1/2+1/3+1/4....1/n after input the nth values.
//7. Write a parameterized constructor in c++ to input a term and print the factorial of that term.


//1
#include <iostream>
using namespace std;

int main()
{
    int dividend, divisor;

    cout << "Enter Dividend and Divisor: ";
    cin >> dividend >> divisor;

    cout << "Quotient = " << dividend / divisor << endl;
    cout << "Remainder = " << dividend % divisor;

    return 0;
}

//2
#include <iostream>
using namespace std;

class Reverse
{
    int n;

public:
    void input()
    {
        cin >> n;
    }

    void display()
    {
        int rev = 0, rem;

        while(n > 0)
        {
            rem = n % 10;
            rev = rev * 10 + rem;
            n /= 10;
        }

        cout << "Reverse = " << rev;
    }
};

int main()
{
    Reverse r;
    r.input();
    r.display();

    return 0;
}

//3
#include <iostream>
using namespace std;

void sumdigit(int n)
{
    int sum = 0, rem;

    while(n > 0)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    cout << "Sum = " << sum;
}

int main()
{
    int n;

    cout << "Enter Number: ";
    cin >> n;

    sumdigit(n);

    return 0;
}

//4
#include <iostream>
using namespace std;

class Series
{
    int n;

public:
    void input()
    {
        cin >> n;
    }

    void display()
    {
        float sum = 0;

        for(int i = 1; i <= n; i++)
            sum += 1.0 / i;

        cout << "Sum = " << sum;
    }
};

int main()
{
    Series s;
    s.input();
    s.display();

    return 0;
}

//5
#include <iostream>
using namespace std;

class Test
{
    int n;

public:
    void get(int n)
    {
        this->n = n;
    }

    void show()
    {
        cout << "Value = " << this->n;
    }
};

int main()
{
    Test t;

    t.get(10);
    t.show();

    return 0;
}

//6
#include <iostream>
using namespace std;

class Test
{
    int n;

public:
    void get(int n)
    {
        this->n = n;
    }

    void show()
    {
        cout << "Value = " << this->n;
    }
};

int main()
{
    Test t;

    t.get(10);
    t.show();

    return 0;
}
//7
#include <iostream>
using namespace std;

class Factorial
{
public:
    Factorial(int n)
    {
        long fact = 1;

        for(int i = 1; i <= n; i++)
            fact *= i;

        cout << "Factorial = " << fact;
    }
};

int main()
{
    int n;

    cout << "Enter a number: ";
    cin >> n;

    Factorial f(n);

    return 0;
}
