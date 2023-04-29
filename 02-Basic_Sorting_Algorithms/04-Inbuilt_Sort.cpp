//* @Desc - Inbuilt Sort
//? @Time Complexity:
//!    Avg --> ⍬(nlogn)
//? @Space Complexity -> O(1)

#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}

void printArray(int arr[], int n)
{
    cout << "Array Contents" << endl;
    cout << "----------------" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
            cout << arr[i] << endl;
        else
        {
            cout << arr[i] << ", ";
        }
    }
}

int main()
{
    system("clear");
    int arr[] = {10, 9, 8, 6, 5, 4, 3, 2, 11, 16, 8};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    sort(arr, arr + n, compare);
    // sort(arr, arr + n, greater<int>());
    // reverse(arr, arr + n);
    printArray(arr, n);
    return 0;
}