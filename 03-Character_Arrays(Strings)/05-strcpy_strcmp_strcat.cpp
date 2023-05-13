#include<iostream>
using namespace std;

int main()
{
    system("clear");
    char a[1000] = "AYAN", b[1000] = " CHAKRABORTY",c[1000];

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    if(strcmp(c,"")==0)
        cout << "c = NULL" << endl;
        else
        cout << "c = " << c << endl;

    //STRCPY
        strcpy(c, a);
        cout << "Copied c = " << c << endl;
    //STRCMP
        cout << "Comparing a with b : ";
        cout << strcmp(a, b) << endl;
        cout << "Comparing b with a : ";
        cout << strcmp(b, a) << endl;
        cout << "Comparing a with a : ";
        cout << strcmp(a, a) << endl;

        //STRCAT
        cout << "Concatenating a and b : " << strcat(a, b)<<endl;

        return 0;
}