/*
Page 163
program 6.7
Implementation of Destructors

*/
#include<iostream>
#include<cstdio>
using namespace std;
int count = 0;
class alpha
{
public:
    alpha()
    {
        count++;
        cout << "\nNo.of object created " << count  ;
    }
    ~alpha()
    {
        cout << "\nNo.of object destroyed " << count;
        count--;
    }
};
//main begin
int main()
{
    cout << "\n\nENTER MAIN\n";

    alpha A1,A2,A3,A4;
    {
        cout << "\n\nENTER BLOCK1\n";
        alpha A5;
    }
    {
        cout << "\n\nENTER BLOCK2\n";
        alpha A6;
    }
    cout << "\n\nRE-ENTER MAIN\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output


ENTER MAIN

No.of object created 1
No.of object created 2
No.of object created 3
No.of object created 4

ENTER BLOCK1

No.of object created 5
No.of object destroyed 5

ENTER BLOCK2

No.of object created 5
No.of object destroyed 5

RE-ENTER MAIN


No.of object destroyed 4
No.of object destroyed 3
No.of object destroyed 2
No.of object destroyed 1
Process returned 0 (0x0)   execution time : 0.328 s
Press any key to continue.
*/

