/*
page 445
MANIPULATING STRING
program 15.4
Write a program that will read a line of text containing
more then three word and then replace all blank space with an underscore(-);

*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool cmp(char c)
{
    if(c == ' ')
        return true;
    else
        return false;
}
//main begin
int main()
{
    string s;
    getline(cin,s);
    replace_if(s.begin(), s.end(), cmp, '-');
    cout << s <<endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Marting Luther King
Marting Luther King
Marting-Luther-King


Process returned 0 (0x0)   execution time : 24.796 s
Press any key to continue.
*/
