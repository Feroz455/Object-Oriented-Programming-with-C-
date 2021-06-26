/*
page 445
MANIPULATING STRING
program 15.6
Write a program that reads the following text and counts the number of times the word 'It'
appears in it.

It is new. It is singular
It is simple. It must succeed.
*/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//main begin
int main()
{
    string s, s1, s2;
    cout << "Enter your String\n";
    getline(cin, s);
    getline(cin, s1);
    s2 = s + s1;
    int count = 0;
    //size_type find(const basic_string& str,size_type pos = 0) const;
    size_t nPos = s2.find("It", 0); // first occurrence
    while(nPos != string::npos)
    {
        count++;
        nPos = s2.find("It", nPos + 1);
    }
    cout << count << endl;
   getchar();
    return 0;
}
//main end
///Program end
/*
output

Enter your String
It is new . It is singular
It is simple It must succed
4

Process returned 0 (0x0)   execution time : 1470.748 s
Press any key to continue.
*/
