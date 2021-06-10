/*
Page 321
program 10.02
Modify the above program to fill the unused spaces with hyphens

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    char name[5][20];
    int code[5],i;
    float cost[5];

    cout.fill('\0');
    for(i = 0; i < 2; i++)
    {
        cout << "\nEnter name\n";
        cin.getline(name[i], 10);
        cout << "\nEnter code\n";

        cin >> code[i];
        cout << "\nEnter cost\n";
        cin >> cost[i];
        cin.get();
        cout << "\n\n";
    }


    cout.width(10);
    cout.setf(ios::left, ios::adjustfield);
    cout << "NAME";
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout << "CODE";
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout<< "COST";
    cout << "\n\n";
    cout.precision(3);
    cout.fill('-');
    for(i = 0; i < 2; i++)
    {
        cout.width(15);
        cout.setf(ios::left, ios::adjustfield);
        cout.write(name[i],10);
        cout.width(10);
        cout.setf(ios::right, ios::adjustfield);
        cout << code[i];
        cout.width(10);
        cout.setf(ios::right, ios::adjustfield);
        cout.setf(ios::fixed, ios::floatfield);
        cout << cost[i];
        cout << "\n\n";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter name
Turbo C++

Enter code
1001

Enter cost
250.95



Enter name
C Primer

Enter code
905

Enter cost
95.70


NAME            CODE      COST

Turbo C++ ------1001---250.950

C Primer  -------905----95.700



Process returned 0 (0x0)   execution time : 36.611 s
Press any key to continue.
*/
