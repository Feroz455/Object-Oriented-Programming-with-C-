/*
page 56
Use of manipulators
*/
#include<iostream>
#include<iomanip> // for setw

using namespace std;
int main()
{
    int Basic = 950, Allowance = 95, Total = 1045;
    cout << setw(10) << "Basic" << setw(10) << Basic << endl
         << setw(10) << "Allowance" << setw(10) << Allowance << endl
         << setw(10) << "Total " << setw(10) << Total << endl;

    return 0;
}
/*

/*
#include<iostream>
ostream & symbol(ostream & output)
{
    return output << "\tRs";
}
*/
     Basic       950
 Allowance        95
    Total       1045

Process returned 0 (0x0)   execution time : 0.094 s
Press any key to continue.
*/
