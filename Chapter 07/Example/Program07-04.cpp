/*
Page 184
program Mathmatical operation on STRING
*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
class STRING
{
    char *p;
    int len;
public:
    STRING() // Create null STRING
    {
        len = 0;
        p = new char[len+1];
    }
    STRING(const char *s); // Create STRING from array
    STRING (const STRING  &s ) ;// copy constructor
    ~STRING()
    {
        delete p;
    }
    //+operator
    friend STRING operator+(const STRING &s, const STRING &t);
    // <= operator
    friend int operator<=(const STRING &s , const STRING &t );
    friend void show(const STRING s);
};
STRING :: STRING(const char *s)
{
    len = strlen(s);
    p = new char[len+1];
    strcpy(p,s);
}
STRING :: STRING (const STRING &s)
{
    len = s.len;
    p = new char[len+1];
    strcpy(p,s.p);

}
//overloading + operator
STRING operator+(const STRING &s, const STRING &t)
{
    STRING temp;
    temp.len = s.len + t.len;
    temp.p = new char[temp.len+1];
    strcpy(temp.p, s.p);
    strcat(temp.p, t.p);
   // cout <<"From temp " << temp.p;
    return(temp);
}
//overloading <= operator
int operator<=(const STRING  &s, const STRING &t)
{
    int m = strlen(s.p);
    int n = strlen(t.p);
    if(m <= n) return(1);
        else return (0);
}
void show (const STRING s)
{
    cout << s.p << endl;
}
//main begin
int main()
{
    STRING s1 = "New  ";
    STRING s2 = "York";
    STRING s3 = "Dhaka ";
    STRING t1, t2, t3 =  s1+s3; // calling constructor // yes copy constructor // implicit call to copy constructor
    t1 = s1;
    t2 = s2;
    //t3 =  s1+s3; // in here we are not calling any constructor ..we are just assigning value into t3
    //problem is here that t3.p = 0 ..which mean there is not address to keep value into memory .
    cout << "\nt1 = "; show(t1);
    cout << "\nt2 = "; show(t2);
    cout << "\nt3 = "; show(t3);
    cout << "\n";

    cout << "\n\n";
    if(t1 <= t3)
    {
        show(t1);
        cout << "smaller then";
        show(t3);
        cout << "\n";
    }
    else
    {
        show(t3);
        cout << "Smaller then ";
        show(t1);
        cout << "\n";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output

t1 = New

t2 = York

t3 = New  Dhaka



New
Smaller then New  Dhaka



Process returned -1073740940 (0xC0000374)   execution time : 1.703 s
Press any key to continue.
*/
