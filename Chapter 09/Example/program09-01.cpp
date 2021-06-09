/*
Page 254
program Example of using pointer

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    int a , *ptr1, **ptr2;
    ptr1 = &a;
    ptr2 = &ptr1;

    cout << "The address of a  :" << ptr1 << "\n";
    cout << "The address of ptr1 : " << ptr2 << "\n";
    cout << "\n\n";

    cout << "After incrementing the address values\n";
    ptr1 += 2;

    cout << "The address of a : " << ptr1 << "\n";
    ptr2 += 2;

    cout << "The address of a : " << ptr2 << "\n";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
The address of a  :0x61fe14
The address of ptr1 : 0x61fe08


After incrementing the address values
The address of a : 0x61fe1c
The address of a : 0x61fe18


Process returned 0 (0x0)   execution time : 1.456 s
Press any key to continue.
*/

