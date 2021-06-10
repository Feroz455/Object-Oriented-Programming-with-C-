/*
Page 307
program 10.6
Padding with fill();

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    cout.fill('<');
    cout.precision(3);
    for(int n = 1; n <= 6; n++)
    {
        cout.width(5);
        cout << n;
        cout.width(10);
        cout << 1.0 / float(n) << "\n";

        if(n == 3)
            cout.fill('>');
    }
    cout << "\nPadding changed \n\n";
    cout.fill('#'); // fill()  reset
    cout.width(15);
    cout << 12.345678 << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

<<<<1<<<<<<<<<1
<<<<2<<<<<<<0.5
<<<<3<<<<<0.333
>>>>4>>>>>>0.25
>>>>5>>>>>>>0.2
>>>>6>>>>>0.167

Padding changed

###########12.3


Process returned 0 (0x0)   execution time : 1.594 s
Press any key to continue.
*/
