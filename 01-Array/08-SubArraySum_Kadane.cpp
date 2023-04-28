#include <iostream>
using namespace std;

int getMaxSubarraySum(int arr[], int n)
{
    int cs = 0, ms = 0, index = 0;
    while(index<n){
        if(cs+arr[index]<0){
            cs = 0;
        }else{
            cs += arr[index];
        }
            ms = max(ms, cs);
        index++;
    }
    return ms;
}

int main()
{
    system("clear");
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << "Maximum subarray sum is = " << getMaxSubarraySum(arr, n);
    return 0;
}