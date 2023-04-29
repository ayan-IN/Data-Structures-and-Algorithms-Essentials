//* @Desc - Counting Sort -> Sorting with a known range. Works almost in linear time.
//? @Time Complexity: (k is max Range, eg. [4,2,1,6,8], here 8 is the max range value staring from 0)
//!    Best --> Ω(n+k)
//!    Avg --> ⍬(n+k)
//!    Worst --> O(n+k)
//? @Space Complexity -> O(k)

#include <iostream>
#include <vector>
using namespace std;

void countingSort(int arr[], int n)
{
    // Finding max element
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        largest = max(largest, arr[i]);
    }
    vector<int> freq(largest + 1, 0);

    // Updating freq vector
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            freq[i]--;
            j++;
        }
    }
    return;
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
    int arr[] = {88, 97, 10, 12, 15, 1, 5, 6, 12, 5, 8};
    int n = sizeof(arr) / sizeof(int);
    printArray(arr, n);
    countingSort(arr, n);
    printArray(arr, n);
    return 0;
}