/*
Page 169
program 6.2
Define a class String that could work as a user_define sting type.Include constructor that will
enable us to create an uninitialized string
String s1: string with length 0;
and also to initialize an object with a string constant at the time of creating like
String s2("Well Done!!");
include a function that adds two strings to make a third sting.Note that the statement
s2 = s1
will be perfectly reasonable expression to copy on string to another.
Write a complete program to test your class to see that it dose following task
a) Creates uninitialized string object
b) Creates objects with string constants
c) Concatenates two string properly
d) Display a desired string object
*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class STRING
{
    int length;
    char *name;
public:
    //constructor without initialization
    STRING() //constructor  1
    {
        length = 0;
        name = new char[length+1];
        strcpy(name,"\0");
    }
    //constructor with constant string
    STRING(char *s) //constructor 2
    {
        length = strlen(s);
        name = new char[length+1];
        strcpy(name,s);
    }
    //copy constructor
    STRING (STRING &s)
    {
        length = s.length;
        name = new char[length+1];
        strcpy(name,s.name);
    }
    //displaying name
    void displayString(void)
    {
        cout << name << endl;
    }
    //joining two string
    void join(STRING &A, STRING &B)
    {
        length = A.length + B.length + 1;
        name   =  new char[length];
        strcpy(name,A.name);
        strcat(name,B.name);
    }

};
//main begin
int main()
{
    //a) Creates uninitialized string object
    STRING s1;
     //Initialized string with 2nd constructor call
     // ..although s1 already called 1st constructor
    s1 =STRING("Sayyid ");
    //Copy constructor
    STRING s2(s1);
    //b) Creates objects with string constants
    STRING s3("Firoz");

    // c) Concatenates two string properly
    STRING s4;
    s4.join(s1,s3);

    cout << "s1 = ";  s1.displayString();
    cout << "s2 = ";  s2.displayString();
    cout << "s3 = ";  s3.displayString();
    cout << "s4 = ";   s4.displayString();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
s1 = Sayyid
s2 = Sayyid
s3 = Firoz
s4 = Sayyid Firoz


Process returned 0 (0x0)   execution time : 6.650 s
Press any key to continue.

*/
