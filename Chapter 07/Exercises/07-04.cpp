/*
Page 200
program 7.4
Define a class String. Use overloaded == operator to compare two string

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

class STRING
{
    int length;
    char *str;
public:
    STRING()
    {
        length = 0;
        str = new char[length+1];
    }
    STRING(char *s)
    {
        length = strlen(s);
        str = new char [length+1];
        strcpy(str,s);
    }
    friend int operator ==(STRING s, STRING t)
    {
        if(strcmp(s.str,t.str) == 0)
            return 1;
        else
            return 0;
    }
    friend void operator << (ostream &out,STRING s)
    {
        out << s.str << endl;
    }
};

//main begin
int main()
{
   STRING s1 = "BANGLADESH";
   STRING s2 = "PAKISTAN";
   cout << s1;
   cout << s2;
    if(s1 == s2)
        cout << "String are same\n";
    else
        cout << "String are different\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
BANGLADESH
PAKISTAN
String are different


Process returned 0 (0x0)   execution time : 1.703 s
Press any key to continue.
*/

