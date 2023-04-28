#include <iostream>
using namespace std;

int getMaxSubarraySum(int arr[], int n)
{
    int prefixSum[n], sum, maxSum = 0;
    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = arr[i] + prefixSum[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            sum = i > 0 ? prefixSum[j] - prefixSum[i - 1] : prefixSum[j];
            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main()
{
    system("clear");
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << "Maximum subarray sum is = " << getMaxSubarraySum(arr, n);
    return 0;
}