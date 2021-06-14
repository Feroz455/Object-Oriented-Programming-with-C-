/*
Page 358
program 11.01
Write a program that reads a text file and creates another file that is identical except that every sequence of consecutive blank
spaces is replaced by a single space
*/
#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

//class definition

//main begin
int  main()
{
    char str[50];
    ofstream fileOut;
    fileOut.open("Program10-1.txt", ios::out);
    fileOut << "Hello Bangladesh??\t\n\n\n\n\n\n\nOK";
    fileOut.close();
    ifstream fileIn;
    fileIn.open("Program10-1.txt", ios::in);
    fileOut.open("Program10-1cpy.txt", ios::out);
    char ch;
    while(fileIn)
    {
        fileIn.get(ch);
        if(ch == '\n' || ch == '\t' || ch == '\r')
        {
             cout << " ";
        }
        else
        {
               cout << ch;
               fileOut.put(ch);

        }
    }
    fileIn.close();
    fileOut.close();


}
//main end
///Program end

/*
output
*/

