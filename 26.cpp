//26.Write the constructors in c++ to add the two input matrix using hierarchical inheritance using 2 dimensional arrays.
#include <iostream>
using namespace std;

class Matrix
{
protected:
    int a[10][10], b[10][10];
    int r, c;

public:
    Matrix()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter first matrix:\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin >> a[i][j];

        cout << "Enter second matrix:\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin >> b[i][j];
    }
};

class Demo : public Matrix
{
};

class Add : public Matrix
{
public:
    Add()
    {
        cout << "\nSum Matrix:\n";

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cout << a[i][j] + b[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Add obj;
    return 0;
}
