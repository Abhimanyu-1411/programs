//36. Write a member function in c++ to concatenate the two input strings.
#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char s1[50], s2[50];

public:
    void input()
    {
        cout << "Enter first string: ";
        cin >> s1;

        cout << "Enter second string: ";
        cin >> s2;
    }

    void concatenate()
    {
        strcat(s1, s2);
        cout << "Concatenated String = " << s1;
    }
};

int main()
{
    String s;

    s.input();
    s.concatenate();

    return 0;
}
