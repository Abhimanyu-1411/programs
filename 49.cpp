//49. Write a file program in c++ to input the year and check whether it is a leap year or not.
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int year;
    ofstream file("student.doc");

    cout << "Enter a year: ";
    cin >> year;

    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        cout << "Leap Year";
        file << year << " is a Leap Year";
    }
    else
    {
        cout << "Not a Leap Year";
        file << year << " is Not a Leap Year";
    }

    file.close();

    return 0;
}
