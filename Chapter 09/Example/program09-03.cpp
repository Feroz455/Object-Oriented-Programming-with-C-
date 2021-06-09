/*
Page 257
program 9.3
Arithmetic operation on pointers
*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    int num[] = {56,75,22,18,90};
    int *ptr;
    int i;

    cout << "The array values are:\n";
    for(i = 0; i < 5; i++)
    {
        cout << num[i] << "\n";
    }
    /*Initializing the base address of str to ptr*/

    ptr = num;

    /*Printing the value in the array */
    cout << "\nValue of ptr : " << *ptr;
    cout << "\n";
    ptr++;
    cout << "\nValue of ptr++ : " << *ptr;
    cout << "\n";
    ptr--;
    cout << "\nValue of ptr-- : " << *ptr;
    cout << "\n";
    ptr = ptr+2;
    cout << "\nValue of ptr+2 : " << *ptr;
    cout << "\n";
    ptr = ptr - 1;
    cout << "\nValue of ptr-1 : " << *ptr;
    cout << "\n";
    ptr += 3;
    cout << "\nValue of ptr+3 : " << *ptr;
    cout << "\n";
    ptr -= 2;
    cout << "\nValue of ptr-2 : " << *ptr;
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
The array values are:
56
75
22
18
90

Value of ptr : 56

Value of ptr++ : 75

Value of ptr-- : 56

Value of ptr+2 : 22

Value of ptr-1 : 75

Value of ptr+3 : 90

Value of ptr-2 : 22


Process returned 0 (0x0)   execution time : 20.364 s
Press any key to continue.

*/

