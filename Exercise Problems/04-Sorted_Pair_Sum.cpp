/*
Sorted Pair Sum
Given a sorted array and a number x, find a pair in array whose sum is closest to x.

Input Format

In the function an integer vector and number x is passed.

Output Format

Return a pair of integers.



Sample Input

{10, 22, 28, 29, 30, 40}, x = 54


Sample Output

22 and 30
*/

#include <iostream>
using namespace std;

pair<int, int> closestSum(vector<int> arr, int x)
{
    // your code goes here
    pair<int, int> p;
    int diff = INT32_MAX, pairDiff;
    int n = arr.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            pairDiff = abs(x - (arr[i] + arr[j]));
            if (pairDiff < diff)
            {
                p = {arr[i], arr[j]};
                diff = pairDiff;
            }
        }
    }
    return p;
}

int main()
{
    system("clear");
    vector<int> arr{10, 22, 28, 29, 30, 40};
    pair<int, int> result;
    result = closestSum(arr,54);
    cout << "( " << result.first << ", " << result.second << " )" << endl;
    return 0;
}