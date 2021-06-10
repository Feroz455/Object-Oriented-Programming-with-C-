/*
Page
program

*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

//class definition

//main begin
int main()
{
    int n;
    cout.fill('*');

    cout.setf(ios::left, ios::adjustfield);
    cout.width(10);
    cout << "VALUES";

    cout.setf(ios::right, ios::adjustfield);
    cout.width(15);
    cout << "SQRT OF VALUE " << "\n";

    cout.fill('.');
    cout.precision(4);
    cout.setf(ios::showpoint);
    cout.setf(ios::showpos);
    cout.setf(ios::fixed, ios::floatfield);


    for(n = 1; n <= 10; n++)
    {
        cout.setf(ios::internal, ios::adjustfield);
        cout.width(5);
        cout << n;

        cout.setf(ios::right, ios::adjustfield);
        cout.width(20);

        cout << sqrt(n) << "\n";
    }

    //floatfield changed
    cout.setf(ios::scientific, ios::floatfield);
    cout << "\nSQRT(100) = " << sqrt(100) << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

VALUES*****SQRT OF VALUE
+...1.............+1.0000
+...2.............+1.4142
+...3.............+1.7321
+...4.............+2.0000
+...5.............+2.2361
+...6.............+2.4495
+...7.............+2.6458
+...8.............+2.8284
+...9.............+3.0000
+..10.............+3.1623

SQRT(100) = +1.0000e+01
*/
