/*
Sorting with Comparator
Given an integer vector and a bool variable flag, your task is to sort the vector in accordance to the boolean value. If the bool value passed is true then sort it in non-decreasing order or vice versa.
You can use any sorting technique of your choice.

Input Format

In the function an integer vector and a boolean is passed.



Output Format

Return an integer vector.



Sample Input

{111, 33, 5, 7, 29}, flag = 1



Sample Output

{5, 7, 29, 33, 111}
*/

#include<iostream>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here
    int n = a.size();
    if (flag)
        sort(a.begin(), a.end());
    else
        sort(a.begin(), a.end(), greater<int>());
    return a;
}

void printVector(vector<int> &arr, int n){
    for(auto x: arr)
        cout << x << ", ";
    cout << endl;
}

int main()
{
    system("clear");
    vector<int> arr{111, 33, 5, 7, 29}, result;
    printVector(arr, arr.size());
    result = sortingWithComparator(arr, true);
    printVector(result, result.size());
    return 0;
}