/*
page 95
program 04.4
The effect of a argument can be alternative achieved by overloading
Discuss with an example
*/
#include<iostream>
using namespace std;
float volume(int i, int j = 0 , int k = 0);
int main()
{
     cout << volume(10) << "\n";
     cout << volume(25,8) << "\n";
     cout << volume(100, 75, 15) << "\n";
     return 0;
}
float volume(int i, int j, int k)
{
    if(j  == 0 && k == 0)
        return(i*i);

    if( k == 0)
        return(3.14519*float(i)*float(i)*float(j));

    return(float(i)*float(j)*float(k));
}
/*
output
100
15726
112500

Process returned 0 (0x0)   execution time : 0.063 s
Press any key to continue.
*/
