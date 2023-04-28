//* @Desc - Bubble Sort -> Take larger element to the end by repeatedly swapping the adjacent elements.
//? @Time Complexity:
//!    Best --> Ω(n)
//!    Avg --> ⍬(n^2)
//!    Worst --> O(n^2)
//? @Space Complexity -> O(1)

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int times = 1; times <= n - 1; times++)
    {
        //* Repeated Swapping
        for (int j = 0; j <= n - times - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
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
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    bubbleSort(arr, n);
    printArray(arr, n);
    return 0;
}