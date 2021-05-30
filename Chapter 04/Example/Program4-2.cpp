/*
page 85
Default arguments
*/
#include<iostream>
using namespace std;
int main()
{
    float amount;
    float value(float p, int n, float r = 0.15);//Prototype
    void printline(char ch = '*', int len = 40); // prototype
    printline(); // use default values for arguments
    amount = value(5000.00,5); // default for 3rd argument

    cout << "\n     Final value =  " << amount << "\n\n";
    printline('='); //use default value for 2nd argument
    return 0;
}
//main end
float value(float p, int n, float r)
{
    int year = 1;
    float sum = p;

    while(year <= n)
    {
        sum = sum*(1+r);
        year = year+1;

    }
    return(sum);
}
void printline(char ch, int len)
{
    for(int i = 1; i <= len; i++)
    {
        cout << ch;
    }
    cout << "\n";
}
/*
output
****************************************

     Final value =  10056.8

========================================

Process returned 0 (0x0)   execution time : 0.078 s
Press any key to continue.
*/
