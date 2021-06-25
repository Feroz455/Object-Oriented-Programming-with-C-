/*
Page  426
program 14.2
Write a program using the find() algorithm to locate the position of a specified value in a
sequence container.


iterator find(iterator start , iterator end, const TYPE& val);
*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
//class definition

//main begin
int main()
{
    vector<int> v;
    int c;
    for(int i = 0; i < 10;  i++)
    {
        v.push_back(i*10);
    }

    for(int n: v)
    {
        cout << n << " ";
    }
    cout << "\nEnter a number  to check in list\n";


    cin >> c ;
    vector<int>::iterator value = find(v.begin(), v.end(), c);

    if(c == *value)
    {
        cout << "\nNumber found\n";
    }
    else
        cout << "\nNumber dose't exits in the list\n";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
0 10 20 30 40 50 60 70 80 90
Enter a number  to check in list
70

Number found

Process returned 0 (0x0)   execution time : 2.705 s
Press any key to continue.


*/

