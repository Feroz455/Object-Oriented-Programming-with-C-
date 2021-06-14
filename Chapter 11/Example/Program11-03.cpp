/*
Page 333
program 11.03
Reading from two files Simultaneously
Read the files created in program 10.2
*/
#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib> // for exit function
using namespace std;

//class definition

//main begin
int main()
{
    const int SIZE = 80;
    char line[SIZE];

    ifstream fin1, fin2; // Create two input streams
    fin1.open("Country.txt");
    fin2.open("Capital.txt");

    for(int i = 1; i <= 10; i++)
    {
        if(fin1.eof() != 0)
        {
            cout << "Exit from country\n";
            exit(1);
        }
        fin1.getline(line, SIZE);
        cout << "Capital of " << line << "\n";
        if(fin2.eof() != 0)
        {
            cout << "Exit from capital\n";
            exit(1);
        }

        fin2.getline(line, SIZE);
        cout << line << "\n";
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Capital of United State of America
Washington
Capital of United kingdom
London
Capital of South Korea
Seoul
Exit from country

Process returned 1 (0x1)   execution time : 0.063 s
Press any key to continue.
*/

