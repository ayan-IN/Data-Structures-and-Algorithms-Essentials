/*
Maximum Subarray Sum
Implement a function that takes an array as input and returns the maximum subarray sum.

Sample Input

1 -2 3 4 4 -2
5 0 -1 0 1 2 -1
Sample Output

11
7
Explanation : for test case one, A[2..4] is [3, 4, 4] and It has max sum 3 + 4 + 4 = 11,

Similarly for test case two, answer should be 7.

Note: Minimum size of the subarray should be 1.
*/

#include <iostream>
using namespace std;

int maxSumSubarray(vector<int> A)
{
    int cs = 0;
    int ms = 0;
    int n = A.size();
    for (int i = 0; i < n; i++)
    {
        cs += A[i];
        if (cs < 0)
            cs = 0;
        ms = max(ms, cs);
    }
    if (ms == 0)
        return -1;
    return ms;
}

int main()
{
    system("clear");
    vector<int> arr{1, -2, 3, 4, 4, -2};
    cout << maxSumSubarray(arr);
    return 0;
}