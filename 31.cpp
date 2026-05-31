//31.Write a file programming in c++ to input a string and print the string and length of that string in a file.
#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    ofstream file("student.doc");

    file << "String: " << str << endl;
    file << "Length: " << strlen(str);

    file.close();

    cout << "Data written to student.doc";

    return 0;
}
