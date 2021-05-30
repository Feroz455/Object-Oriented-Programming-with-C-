/*
page 75
program 03.3
Write a program to print the following output using for loop
1
22
333
4444
5555
*/
#include<iostream>
using namespace std;
int main()
{
    int i;
    cout << "Enter value of n\n";
    cin >> i;
    for(int j = 0; j < i; j++)
    {
        for(int k = 0; k < j; k++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
/*
output
Enter value of n
10

1
22
333
4444
55555
666666
7777777
88888888
999999999

Process returned 0 (0x0)   execution time : 1.062 s
Press any key to continue.
*/
