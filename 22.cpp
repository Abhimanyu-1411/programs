//22. Write a program in c++ to input the values of length and breadth and print the perimeter of the rectangle using a file name student.doc
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    float length, breadth, perimeter;

    cout << "Enter length: ";
    cin >> length;

    cout << "Enter breadth: ";
    cin >> breadth;

    perimeter = 2 * (length + breadth);

    ofstream file("student.doc");

    file << "Length = " << length << endl;
    file << "Breadth = " << breadth << endl;
    file << "Perimeter of Rectangle = " << perimeter << endl;

    file.close();

    cout << "Perimeter stored in student.doc file." << endl;

    return 0;
}
