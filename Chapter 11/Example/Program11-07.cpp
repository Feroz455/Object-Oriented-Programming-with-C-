/*
Page 344
program 11.7
Counting Object in a file

*/
#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstring>
using namespace std;

//class definition
class emp
{
    char name[30];
    int ecode;
public:
    emp(){};
    emp(char *n, int  c)
    {
        strcpy(name,n);
        ecode = c ;
     }
};
//main begin
int main()
{
    emp e[4];
    e[0] = emp("Amit", 1);
    e[1] = emp("Joy", 2);
    e[2] = emp("Rahul", 3);
    e[3] = emp("Firoz", 4);

    fstream file;
    file.open("Employee.dat", ios::out);
    file.close();

    file.open("Employee.dat", ios::out|ios::in);
    int i;

    for(i = 0; i < 4; i++)
    {
        file.write((char *)&e[i], sizeof(e[i]));
    }
    file.seekg(0, ios::end);

    streampos end = file.tellg();
    cout << "Number of object store int Employee.dat is: " << end/sizeof(emp);
    cout << "size of emp = " << sizeof(e[0]) << " Size of end = " << end;


    getchar();
    return 0;
}
//main end
///Program end

/*
outputNumber of object store int Employee.dat is: 4

Process returned 0 (0x0)   execution time : 5.421 s
Press any key to continue.

*/

