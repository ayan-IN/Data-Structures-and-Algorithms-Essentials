#include <iostream>
#include <string>
using namespace std;

//* Function to find the shortest path
string shortestPath(string &s)
{
    int index = 0, x = 0, y = 0;
    string result;
    while (s[index] != '\0')
    {
        switch (s[index])
        {
        case 'N':
            y += 1;
            break;
        case 'S':
            y -= 1;
            break;
        case 'E':
            x += 1;
            break;
        case 'W':
            x -= 1;
            break;
        default:
            cout << "Wrong Input. Run again!";
            return "ERROR";
        }
        index++;
    }
    if (y >= 0)
    {
        while (y--)
            result += 'N';
    }
    else
    {
        y = -1 * y;
        while (y--)
            result += 'S';
    }
    if (x >= 0)
    {
        while (x--)
            result += 'E';
    }
    else
    {
        x = -1 * x;
        while (x--)
            result += 'W';
    }
    return result;
}

int main()
{
    system("clear");
    string s;
    cout << "Enter travel string : ";
    cin >> s;
    cout << "Shortest Path from origin : " << shortestPath(s);
    return 0;
}