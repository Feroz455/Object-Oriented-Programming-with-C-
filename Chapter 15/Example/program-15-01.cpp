/*
page 431
MANIPULATING STRING
program 15-1
Create string Object
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    //Creating String object
    string s1; // Empty string Object
    string s2("New"); //Using string constant
    string s3(" Dhaka");

    //Assigning value to string objects
    s1 = s2; //Using string object
    cout << "S1 = " << s1 << "\n";
    //Using a string constant
    s1 = "Standard c++";
    cout << "Now s1 = " << s1 << " \n";
    //Using Another object

    string s4(s1);

    cout << "S4 = " << s4 << "\n";

    //reading through key
    cout << "Enter a string\n";
    cin >> s4; //Delimited by blank space
    cout << "Now s4 = " << s4 << "\n\n";

    //Concatenating strings
    s1 = s2 + s3;

    cout << "s1 finally contains: " << s1 << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

S1 = New
Now s1 = Standard c++
S4 = Standard c++
Enter a string
Computer center
Now s4 = Computer

s1 finally contains: New Dhaka

Process returned 0 (0x0)   execution time : 17.934 s
Press any key to continue.
*/
