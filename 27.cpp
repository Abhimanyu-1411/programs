//27.Write the constructors in c++ to transpose of an  input matrix using friend function with hybrid inheritance.
#include <iostream>
using namespace std;

class Base
{
protected:
    int a[10][10], r, c;

public:
    Base()
    {
        cout << "Enter rows and columns: ";
        cin >> r >> c;

        cout << "Enter matrix elements:\n";
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin >> a[i][j];
    }
};

class A : public Base
{
};

class B : public Base
{
    friend void transpose(B);
};

void transpose(B obj)
{
    cout << "\nTranspose Matrix:\n";

    for(int i=0;i<obj.c;i++)
    {
        for(int j=0;j<obj.r;j++)
        {
            cout << obj.a[j][i] << " ";
        }
        cout << endl;
    }
}

class C : public B
{
};

int main()
{
    C obj;
    transpose(obj);

    return 0;
}
