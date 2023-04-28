#include <iostream>
using namespace std;

void ArrayReverse(int arr[], int n)
{
    for (int i = 0; i < n / 2;i++)
    {
        swap(arr[i], arr[n - i - 1]);
    }
}

void printArray(int arr[], int n)
{
    cout << "Array Contents" << endl
         << "----------------" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << arr[i] << endl;
        else
            cout << arr[i] << ", ";
    }
}

int main()
{
    system("clear");
    int arr[] = {1, 4, 6, 9, 33, 21, 33, 26};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    ArrayReverse(arr, n);
    printArray(arr, n);
    return 0;
}