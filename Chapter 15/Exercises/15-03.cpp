/*
page 445
MANIPULATING STRING
program 15.3
Write a program that reads several city names from the keyboard and display
only those names beginning with character "B" or "C".
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s[5];
    cout << "Enter Five city name\n";
    for(int i = 0; i < 5; i++)
    {
        cin >> s[i];
    }
    cout << "Printing Names Which begin with character 'B' or 'C'\n";
    for(int i = 0;  i < 5; i++)
    {
        if(s[i].at(0) == 'B'| s[i].at(0) == 'b' | s[i].at(0) == 'C'| s[i].at(0)== 'c')
            cout << s[i] << endl;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter Five city name
Dhaka
Borisal
Chottogram
Bogura
Feny
Printing Names Which begin with character 'B' or 'C'
Borisal
Chottogram
Bogura

Process returned 0 (0x0)   execution time : 18.458 s
Press any key to continue.

*/
