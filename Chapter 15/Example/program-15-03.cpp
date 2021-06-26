/*
page 433
MANIPULATING STRING
program 15-03
Relational Operations on string object
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s1("ABC");
    string s2("XYZ");

    string s3 = s1 + s2 ;

    if(s1 != s2)
    {
        cout << s1 << " is not equal to " << s2 << "\n";
    }
    if(s1 > s2)
        cout << s1 <<  " is greater than " << s2 << "\n";
        else
        cout << s2 <<  " is greater than " << s1 << "\n";

    if(s3 == s1+s2)
    {
        cout << s3 << " is equal to " << s1+s2 << "\n\n";
    }

    int x = s1.compare(s2);
    if(x == 0)
    {
        cout << s1 <<" = "<< s2 << "\n";
    }
    else
        if(x > 0)
        cout << s1 << " > " << s2 << "\n";
    else
        cout << s1 << " < " << s2 << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

ABC is not equal to XYZ
XYZ is greater than ABC
ABCXYZ is equal to ABCXYZ

ABC < XYZ


Process returned 0 (0x0)   execution time : 1.972 s
Press any key to continue.
*/
