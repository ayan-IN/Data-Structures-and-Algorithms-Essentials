#include <iostream>
using namespace std;

void printSubarrays(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j;k++){
                cout << arr[k] << ", ";
            }
            cout << endl;
        }
        
    }
}

int main()
{
    system("clear");
    int arr[] = {1, 4, 6, 9, 33, 21, 33, 26};
    int n = sizeof(arr) / sizeof(int);
    printSubarrays(arr, n);
    return 0;
}