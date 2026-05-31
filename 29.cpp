//29.Write the constructor in c++ to search the input element using linear searching and if found print it in student.doc file.
#include <iostream>
#include<fstream>
using namespace std;

class Search{
    public:
    Search(){
        int a[10],item,n,i;
        ofstream file("student.txt");
        cout << "Enter number of elements: ";
        cin >> n;
        
        cout << "Enter elements:\n";
        for(i = 0; i < n; i++)
            cin >> a[i];

        cout << "Enter element to search: ";
        cin >> item;
        
        int found = 0;

        for(i = 0; i < n; i++)
        {
            if(item == a[i])
            {
                found = 1;
                break;
            }
        }

        if(found)
        {
            cout << "Element Found";
            file << "Element Found";
        }
        else
        {
            cout << "Element Not Found";
            file << "Element Not Found";
        }

        file.close();
    }
};

int main()
{
   Search s;
   return 0;
}
