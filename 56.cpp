//56. Write a member function in c++ to check whether a given matrix is magic matrix or not.
#include <iostream>
using namespace std;

class MagicMatrix
{
    int a[10][10], n;

public:
    void input()
    {
        cout << "Enter order of matrix: ";
        cin >> n;

        cout << "Enter matrix elements:\n";
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
    }

    void checkMagic()
    {
        int sum = 0;

        for (int j = 0; j < n; j++)
            sum += a[0][j];

        for (int i = 0; i < n; i++)
        {
            int rowSum = 0;
            for (int j = 0; j < n; j++)
                rowSum += a[i][j];

            if (rowSum != sum)
            {
                cout << "Not a Magic Matrix";
                return;
            }
        }

        for (int j = 0; j < n; j++)
        {
            int colSum = 0;
            for (int i = 0; i < n; i++)
                colSum += a[i][j];

            if (colSum != sum)
            {
                cout << "Not a Magic Matrix";
                return;
            }
        }

        int diag1 = 0, diag2 = 0;
        for (int i = 0; i < n; i++)
        {
            diag1 += a[i][i];
            diag2 += a[i][n - 1 - i];
        }

        if (diag1 == sum && diag2 == sum)
            cout << "Magic Matrix";
        else
            cout << "Not a Magic Matrix";
    }
};

int main()
{
    MagicMatrix m;
    m.input();
    m.checkMagic();

    return 0;
}
