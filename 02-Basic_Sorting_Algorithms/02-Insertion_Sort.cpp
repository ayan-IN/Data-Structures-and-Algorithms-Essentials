//* @Desc - Insertion Sort -> Similar to playing cards in our hands. Insert the card in its correct position in a sorted part.
//? @Time Complexity -> O(n^2) 
//? @Space Complexity -> O(1)

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i <= n - 1;i++){
        int current = arr[i];
        int prev = i - 1;
        //* This loop find the right index where the element current should be inserted.
        while(prev>=0 and arr[prev]>current){
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
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
    insertionSort(arr, n);
    printArray(arr, n);
    return 0;
}