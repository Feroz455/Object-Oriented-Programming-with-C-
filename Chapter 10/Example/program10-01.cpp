/*
Page 296
program 10.01
Character I/O WITH get() AND put();

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    int count = 0;
    char c;
    cout << "INPUT TEXT\n";
    cin.get(c);
    while(c != '\n')
    {
        cout.put(c);
        count++;
        cin.get(c);
    }

    cout << "\nNumber of character = " << count << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
INPUT TEXT
object Oriented Programming
object Oriented Programming
Number of character = 28


Process returned 0 (0x0)   execution time : 27.912 s
Press any key to continue.
*/
