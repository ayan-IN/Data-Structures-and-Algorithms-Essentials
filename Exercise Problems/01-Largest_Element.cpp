/*
Largest Element
Implement a function that takes vector of integers as input and returns the largest element.

Sample Input

-3 4 1 2 3

-1 -2 -3 -3 8

Sample Output

4

8

Explanation : for test case one, 4 is the largest integer in the array.

Similarly for test case two, 8 is the largest integer in the array.

*/

#include <iostream>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        largest = max(largest, arr[i]);
    }
    return largest;
}

int main()
{
    vector<int> arr{-3, 4, 1, 2, 3};
    cout << largestElement(arr);
    return 0;
}