/*
K-Rotate
Given an integer vector and a value k, your task is to rotate the array k times clockwise.

Input Format

In the function an integer vector and number k is passed.

Output Format

Return an integer vector.



Sample Input

{1, 3, 5, 7, 9}, x = 2


Sample Output

{7, 9, 1, 3, 5}


Explanation

After 1st rotation - {9, 1, 3, 5, 7}
After 2nd rotation - {7, 9, 1, 3, 5}
*/

#include <iostream>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    // your code  goes here
    int n = a.size();
    int temp;
    while (k--)
    {
        temp = a[n - 1];
        a.pop_back();
        a.insert(a.begin(), temp);
    }
    return a;
}

int main()
{
    system("clear");
    vector<int> arr{1, 3, 5, 7, 9}, result;
    for (auto x : arr)
        cout << x << ", ";
    cout << endl;
    result = kRotate(arr, 2);
    cout << "Result : \n--------\n";
    for (auto x : result)
        cout << x << ", ";
    cout << endl;
    return 0;
}