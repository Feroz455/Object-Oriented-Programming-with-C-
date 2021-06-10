/*
Page 321
program 10.01
Write a program to read a list containing item name, item code , and cost interactive and
produce a three column output as show below


NAME            CODE            COST
Turb c++        1001            250.95
c primer        905              95.70


Note that the name and code are left-justified and the cost in right-justified with precision
of two digits.Trailing zeros are shown.
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
    for(i = 0; i < 5; i++)
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
    for(i = 0; i < 5; i++)
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
C primer

Enter code
905

Enter cost
95.70



Enter name
Java Se

Enter code
9865

Enter cost
80.50



Enter name
Java EE

Enter code
50005

Enter cost
200.20



Enter name
Algorithm

Enter code
501

Enter cost
56.50


NAME            CODE      COST

Turbo C++       1001   250.950

C primer         905    95.700

Java Se         9865    80.500

Java EE        50005   200.200

Algorithm        501    56.500



Process returned 0 (0x0)   execution time : 109.950 s
Press any key to continue.
*/

