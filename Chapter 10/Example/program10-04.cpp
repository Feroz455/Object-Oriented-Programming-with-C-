/*
Page  303
program  10.04
Specifying Field size with width()

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    int items[4] = {10,8,12,15};
    int cost[4] = {75,100,60,99};

    cout.width(5);
    cout << "Items";
    cout.width(8);
    cout << "COST";

    cout.width(15);
    cout << "TOTAL VAlUE " << "\n";

    int sum = 0;

    for(int i = 0; i < 4; i++)
    {
        cout.width(5);
        cout << items[i];

        cout.width(8);
        cout << cost[i];

        int value = items[i] * cost[i];

        cout.width(15);
        cout << value << "\n";

        sum = sum + value ;
    }
    cout << "\nGrand Total = ";
    cout.width(2);
    cout << sum << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Items    COST   TOTAL VAlUE
   10      75            750
    8     100            800
   12      60            720
   15      99           1485

Grand Total = 3755


Process returned 0 (0x0)   execution time : 34.126 s
Press any key to continue.


*/
