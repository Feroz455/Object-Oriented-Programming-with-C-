/*
page 445
MANIPULATING STRING
program 15.1
Write a program that reads the name
Martin Luther king
From the keyboard into three separate string objects
and then concatenates them into a new string object using
a) + operator and
b) append() function
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s, s1, s2, s3;
    cout << "Enter Martin Luther King -_- XD\n";
    cout << endl;
    cin >> s >> s1 >> s2;

    cout << "s = " << s << endl;
    cout << "s1 = " << s1 << endl;
    cout << "s2 = " << s2 << endl;
    cout << "Concatenates 3 string Using '+' operator\n";
    s3 = s +" "+ s1 + " " + s2;
    cout << "s3  = " << s3 << endl;

    s3.clear();
    cout << "Concatenates 3 string Using append() function\n";
    s3.append(s);
    s3.append(" ");
    s3.append(s1);
    s3.append(" ");
    s3.append(s2);
    cout << "s3  = " << s3 << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter Martin Luther King -_- XD

Murtin Luther King
s = Murtin
s1 = Luther
s2 = King
Concatenates 3 string Using '+' operator
s3  = Murtin Luther King
Concatenates 3 string Using append() function
s3  = Murtin Luther King

Process returned 0 (0x0)   execution time : 9.578 s
Press any key to continue.

*/
