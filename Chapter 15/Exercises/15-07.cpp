/*
page 445
MANIPULATING STRING
program 15.7
Modify the program in Exercises 15.6
to count the number of word which start with the character 's';
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//main begin
int main()
{
    size_t nPos = 1  , count = 0;
    string s("Hello mr Small Small Shout ");
    if(s[0] == 'S' | s[0] == 'S')
    count++;

    while(nPos != string::npos)
    {
        nPos = s.find(' ', nPos+1);
        if(s[nPos+1] == 's' | s[nPos+1] == 'S')
        {
            count++;
        }

    }
    cout << "Number of word start with s is = " << count << " Times";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Number of word start with s is = 3 Times

Process returned 0 (0x0)   execution time : 1.344 s
Press any key to continue.
*/
