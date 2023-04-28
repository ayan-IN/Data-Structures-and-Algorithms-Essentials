//* @Desc - Selection Sort -> Repeatedly find the minimum element from the unsorted part and putting it at the beginning.
//? @Time Complexity -> O(n^2)
//? @Space Complexity -> O(1)

#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int pos = 0; pos <= n - 2;pos++){
        int current = arr[pos];
        int min_position = pos;

        // find out the element
        for (int j = pos; j < n;j++){
            if(arr[j]<arr[min_position]){
                min_position = j;
            }
        }
        // swap outside the loop
        swap(arr[min_position], arr[pos]);
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
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}