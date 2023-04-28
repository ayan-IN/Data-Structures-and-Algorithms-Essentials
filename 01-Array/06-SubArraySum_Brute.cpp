#include <iostream>
using namespace std;

int getMaxSubarraySum(int arr[], int n)
{
    int sum, maxSum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main()
{
    system("clear");
    int arr[] = {-2, 3, 4,-1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << "Maximum subarray sum is = " << getMaxSubarraySum(arr, n);
    return 0;
}