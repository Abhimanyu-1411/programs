//38. Write a program in c++ to input a string in lowercase character and convert it to uppercase character.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string in lowercase: ";
    cin.getline(str, 100);

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    cout << "Uppercase String = " << str;

    return 0;
}

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    strupr(str);

    cout << "Uppercase String = " << str;

    return 0;
}
