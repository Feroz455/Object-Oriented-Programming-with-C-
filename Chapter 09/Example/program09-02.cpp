/*
Page 255
program Manipulation of pointer

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    int a = 10, *ptr;

    ptr = &a;
    cout << "The value of a is : " << a;
    cout << "\n\n";

    *ptr = (*ptr) / 2;

    cout << "The values of a is : " << (*ptr);
    cout << "\n\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The value of a is : 10

The values of a is : 5



Process returned 0 (0x0)   execution time : 1.378 s
Press any key to continue.
*/

