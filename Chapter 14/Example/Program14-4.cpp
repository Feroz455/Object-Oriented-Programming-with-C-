/*
Page 421
program 14.4
Use of Function Object in Algorithms

*/
#include<iostream>
#include<cstdio>
#include<algorithm>
#include<functional>
using namespace std;

//class definition

//main begin
int main()
{
    int x[] = {10,50,30,40,20};
    int y[] = {70,90,60,80};
    sort(x, x+5, greater<int>());
    sort(y,y+4);
    for(int i = 0; i < 5; i++)
    {
        cout << x[i] << " ";
    }
    cout << "\n";
     for(int i = 0; i < 5; i++)
    {
        cout << y[i] << " ";
    }
    cout << "\n\n";
    int z[9];
    merge(x,x+5, y, y+4, z);
    for(int i = 0; i < 9; i++)
    {
        cout << z[i] << " ";
    }
    cout << "\n\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

50 40 30 20 10
60 70 80 90 50

50 40 30 20 10 60 70 80 90



Process returned 0 (0x0)   execution time : 61.797 s
Press any key to continue.
*/

