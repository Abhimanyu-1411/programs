//48. Write a constructor in c++ to input the length,height and breadth of 3 wooden piece and calculate and print the total size in CFT using destructor
#include <iostream>
using namespace std;

class Wood
{
    float l[3], b[3], h[3], total = 0;

public:
    Wood()
    {
        for(int i = 0; i < 3; i++)
        {
            cout << "Enter Length, Breadth and Height of Piece "
                 << i + 1 << ": ";
            cin >> l[i] >> b[i] >> h[i];
        }
    }

    ~Wood()
    {
        for(int i = 0; i < 3; i++)
        {
            total = total + (l[i] * b[i] * h[i]);
        }

        cout << "\nTotal CFT = " << total;
    }
};

int main()
{
    Wood w;
    return 0;
}
