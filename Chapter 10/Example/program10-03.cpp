/*
Page 299
program 10.03
Displaying string with write()

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class definition

//main begin
int main()
{
    char *string1 = "C++ ";
    char *string2 = "Programming";
    int m= strlen(string1);
    int n = strlen(string2);
    int i;
    for( i = 1; i < n; i++)
    {
        cout.write(string1,i);
        cout << "\n";
    }
    for(i = n; i > 0; i--)
    {
        cout.write(string2, i);
        cout << "\n";
    }

    //concatenating string
    cout.write(string1,m).write(string2,n);
    cout << "\n";

    cout.write(string1,10);
    getchar();
    return 0;
}
//main end
///Program end

/*
output
C
C+
C++
C++
C++
C++  P
C++  Pr
C++  Pro
C++  Prog
C++  Progr
Programming
Programmin
Programmi
Programm
Program
Progra
Progr
Prog
Pro
Pr
P
C++ Programming
C++  Progr

Process returned 0 (0x0)   execution time : 16.914 s
Press any key to continue.
*/
