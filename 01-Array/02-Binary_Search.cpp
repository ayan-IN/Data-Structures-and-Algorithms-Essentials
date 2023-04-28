#include <iostream>
using namespace std;

void BinarySearch(int arr[], int s, int e, int key)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found! " << key << " is found at index " << mid << endl;
            return;
        }
        if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
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
    int arr[] = {1, 4, 6, 9, 21, 33, 33, 76};
    int key;
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    cout << "Enter element to search : ";
    cin >> key;
    BinarySearch(arr,0, n, key);
    return 0;
}