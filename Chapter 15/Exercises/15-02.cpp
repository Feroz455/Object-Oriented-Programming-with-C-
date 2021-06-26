/*
page 445
MANIPULATING STRING
program 15.2
Write a program using Iterator and while() construct to display the contents of a string object
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s("BANGLADESH");
    size_t si = s.size();
    cout << si << endl;
    size_t i = 0;
    while(si)
    {
        cout << s.at(i);
        i++;
        si--;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
10
BANGLADESH

Process returned 0 (0x0)   execution time : 1.359 s
Press any key to continue.

*/
