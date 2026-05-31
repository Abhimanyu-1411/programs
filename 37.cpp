//37. Write a constructor in c++ to compare the two input string and compare it using strcmp() where output of the both input string is highlighted in bold letter.
#include <iostream>
#include <cstring>
using namespace std;

class Compare
{
    char s1[50], s2[50];

public:
    Compare()
    {
        cout << "Enter first string: ";
        cin >> s1;

        cout << "Enter second string: ";
        cin >> s2;

        if(strcmp(s1, s2) == 0)
            cout << "Strings are Equal";
        else
            cout << "Strings are Not Equal";
    }
};

int main()
{
    Compare c;
    return 0;
}
