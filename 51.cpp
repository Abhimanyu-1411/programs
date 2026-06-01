//51. Write a constructor C++ to Convert Hours in Terms of Minutes and Seconds.
#include <iostream>
using namespace std;

class Time
{
    float hour;

public:
    Time()
    {
        cout << "Enter Hours: ";
        cin >> hour;

        cout << "Minutes = " << hour * 60 << endl;
        cout << "Seconds = " << hour * 3600;
    }
};

int main()
{
    Time t;
    return 0;
}
