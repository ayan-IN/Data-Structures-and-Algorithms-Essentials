//* Program to find the count of alphabets, digits and spaces in a give sentence
#include <iostream>
using namespace std;

//* Function behind the counting
void countDigitsAndSpaces(char sentence[])
{
    int alpha = 0;
    int digits = 0;
    int spaces = 0;
    int index = 0;
    while (sentence[index] != '\0')
    {
        if (isalpha(sentence[index]))
        {
            alpha++;
        }
        else if (sentence[index] >= '0' and sentence[index] <= '9')
        {
            digits++;
        }
        else if (sentence[index] == ' ')
        {
            spaces++;
        }
        index++;
    }
    cout << "Results : \n----------\n";
    cout << "Alphabets : " << alpha << endl;
    cout << "Digits : " << digits << endl;
    cout << "Spaces : " << spaces << endl;
}

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
    countDigitsAndSpaces(sentence);
    return 0;
}