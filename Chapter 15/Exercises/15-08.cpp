/*
page 445
MANIPULATING STRING
program 15.8
Write a program that reads a list of countries in random order
and display them in alphabetical order.Use comparison operator and Function.
*/
#include<iostream>
#include<string>
using namespace std;
#define N 5
//main begin
int main()
{
   string a[N];
   string temp;
   int  i, j;

   cout << "Enter 5 name\n";
   for(i = 0;  i < N; i++)
    cin >> a[i];



   for(i = 0; i < N; i++)
   {
       for(j = 1; j < N; j ++)
       {
           if(a[j-1] > a[j])
           {
               temp = a[j-1];
               a[j-1] = a[j];
               a[j] = temp;
           }
       }
   }

   cout << "Sorted Name list is\n";
   for (i = 0; i < N; i++)
    cout << a[i] << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter 5 name
Firoz
Shadin
Oishee
Abdulla
Nahid
Sorted Name list is
Abdulla
Firoz
Nahid
Oishee
Shadin

Process returned 0 (0x0)   execution time : 1.232 s
Press any key to continue.

*/
