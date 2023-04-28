#include <iostream>
using namespace std;

void LinearSearch(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element Found! " << arr[i] << " is found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found!" << endl;
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
    int key;
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    cout << "Enter element to search : ";
    cin >> key;
    LinearSearch(arr, n, key);
    return 0;
}