/*
page 445
MANIPULATING STRING
program 15.9
Given a string
string s("123456789");

Write a program that display the following
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s("123456789");
    int i , j, k;
    for(i = 0; i < 5; i++)
    {
        for(k = i; k <= 5; k++)
            cout << "  ";
        for(j = 0; j <= i; j++)
        {
            cout << s.at(j+i) << " ";
            if(i == j)
            {
                for(k = 0; k < j; k++)
                {
                    cout << s[(j+i-1)-k] << " ";
                }
            }
        }

        cout << "\n";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
            1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5


Process returned 0 (0x0)   execution time : 4.446 s
Press any key to continue.
*/
