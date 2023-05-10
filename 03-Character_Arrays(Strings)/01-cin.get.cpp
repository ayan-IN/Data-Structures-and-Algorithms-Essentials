#include <iostream>
using namespace std;

int main()
{
    system("clear");
    char sentence[1000];
    char temp = cin.get();
    int len = 0;
    while (temp != '#')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout << sentence << endl;
    return 0;
}