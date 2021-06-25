/*
page 400
Exception Handling
program 13-6
Write a program with the following
a) A function to read two double type numbers from the keyboard.
b) A function to calculate the division of these two numbers
c) A try block to throw an exception when a wrong type of data is keyed in
d) A try block to detect and throw an exception if the condition "divide - by - zero" occurs.
e) Appropriate catch block to handle the exceptions throws

*/
#include<iostream>
#include<cctype>
using namespace std;

//main begin
int main()
{
    double d, dd;
    cout << "Enter two double number\n";
    cin >> d >> dd;

    try
    {
    if(d == 0 )
        throw("NOT A DOUBLE NUMBER");
    if(dd == 0)
        throw("divide-by-zero");
        cout << d / dd <<endl;
    }
    catch(char const *c)
    {
        cout << c;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter two double number
jvbv
NOT A DOUBLE NUMBER
Process returned 0 (0x0)   execution time : 1.583 s
Press any key to continue.
/********************
Enter two double number
123.36
456.3
0.270348

Process returned 0 (0x0)   execution time : 5.768 s
Press any key to continue.


/*********************./////


Enter two double number
123.3



0
divide-by-zero
Process returned 0 (0x0)   execution time : 9.141 s
Press any key to continue.
*/
