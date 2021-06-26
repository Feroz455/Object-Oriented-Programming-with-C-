/*
page 445
MANIPULATING STRING
program 15.5
Write a program that counts the number of occurrences of a particular character, say 'e' in a line of text;
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool comp(char c)
{
    if(c == 'e')
        return true;
    else
        return false;
}
//main begin
int main()
{
    string s("It is new. It is singuleeeeeeeeeeeeeeear");
    size_t m = count_if(s.begin(), s.end(),bind2nd(equal_to<char>(),'e'));

    cout << "e occur = " << m << " Times\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
e occur = 16 Times

Process returned 0 (0x0)   execution time : 2.220 s
Press any key to continue.
*/
