//* Problem: Read N Strings and print the largest string. Each string can have upto 1000 characters.
#include <iostream>
using namespace std;

int main()
{
    system("clear");
    int n;
    cin >> n;
    cin.get();
    char sentence[1000], largest[1000];
    int largets_len = 0;
    while (n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if(len>largets_len){
            largets_len = len;
            strcpy(largest, sentence);
        }
    }
    cout << "Largest sentence is : " << largest << endl;
    return 0;
}