/*
Lower Bound
Given an array of integers A (sorted) and a integer Val.

Implement a function that takes A and Val as input parameters and returns the lower bound of Val.

Note : If Val is not present in array then Lower bound of a given integer means integer which is just smaller than given integer.

Otherwise Val itself is the answer.

If Val is less than smallest element of array A then return '-1' in that case.



Example 1  :

A = [-1, -1, 2, 3, 5]

Val = 4

Answer :  3

Since 3 is just smaller than 4 in the array.

Example 2  :

A = [1, 2, 3, 4, 6]

Val = 4

Answer :  4
Since 4 is equal to 4.
*/

#include<iostream>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    // your code goes here
    int lowerBound = INT32_MIN, n = A.size(), status = 0;
    for (int i = 0; i < n; i++)
    {
        if (A[i] <= Val)
        {
            status = 1;
            lowerBound = max(lowerBound, A[i]);
        }
    }
    if (status == 0)
        return -1;
    return lowerBound;
}

int main()
{
    system("clear");
    vector<int> A{-1, -1, 2, 3, 5};
    cout << lowerBound(A, 4);
    return 0;
}