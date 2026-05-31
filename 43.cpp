//43. Write the template function to print the sum of 1st nth term and find the duplicate elements from an array list using template function overloading.
#include <iostream>
using namespace std;

template <class T>
void show(T n)
{
    T sum = 0;

    for(T i = 1; i <= n; i++)
        sum += i;

    cout << "Sum = " << sum << endl;
}

template <class T>
void show(T a[], int n)
{
    cout << "Duplicate Elements: ";

    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
                cout << a[i] << " ";
        }
    }
}

int main()
{
    int n;

    cout << "Enter nth term: ";
    cin >> n;

    show(n);

    int arr[10], size;

    cout << "\nEnter size of array: ";
    cin >> size;

    cout << "Enter array elements: ";
    for(int i = 0; i < size; i++)
        cin >> arr[i];

    show(arr, size);

    return 0;
}
