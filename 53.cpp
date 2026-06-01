//53. Write a program in c++ to input a term and print the pascal triangle of that term.
#include <iostream>
using namespace std;

int main()
{
    int n, i, j, k;
    int coef;

    cout << "Enter number of terms: ";
    cin >> n;

    for(i = 0; i < n; i++)
    {
        for(k = 0; k < n - i - 1; k++)
            cout << " ";

        coef = 1;

        for(j = 0; j <= i; j++)
        {
            cout << coef << " ";
            coef = coef * (i - j) / (j + 1);
        }

        cout << endl;
    }

    return 0;
}
