/*
page 34
program 2.4
Write a program to read the value of a, b and c and display the value of x, where
 x = a/b -c
 Test your program for following values
 a) a = 250 , b = 85, c = 25;
 b) a = 300, b = 70; c = 70;
*/
///program begin
#include<iostream>
using namespace std;

///main begin
int main()
{
    int a, b, c;
    float x;
    int i;
    for(i = 0; i < 2; i++)
    {
        cout << "\nEnter your value\n";
        cin >> a >> b >> c;
        if(b-c == 0)
        {
            cout << "x = 0\n";
        }
        else
        {
            x = a/b-c;
            cout << "x = " << x < "\n";
        }

    }
    return 0;
}
//main end
///program end
/*
output

Enter your value
250
85
25
x = -23
Enter your value
300
70
70
x = 0

Process returned 0 (0x0)   execution time : 17.335 s
Press any key to continue.

*/
