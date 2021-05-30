/*
page 75
program 3.1
Write a function using reference variables as arguments to swap the values of a pair of integer

*/
#include<iostream>
using namespace std;
//swap function
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

}
// main begin
int main()
{
    int i = 10;
    int j = 15;
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;
    swap(i, j);
    cout << "i = " << i << endl;
    cout << "j = " << j << endl;

    return 0;
}
/*
output

i = 10
j = 15
i = 15
j = 10

Process returned 0 (0x0)   execution time : 0.062 s
Press any key to continue.
*/
