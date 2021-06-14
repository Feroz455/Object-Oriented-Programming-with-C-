/*
Page 331
program 11.02
Working WIth Multiple files
//creating files with open() Function
*/
#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

//class definition

//main begin
int main()
{
    ofstream fout; // create output stream
    fout.open("country.txt"); // connect "Country" to it

    fout << "United State of America\n";
    fout << "United kingdom\n";
    fout << "South Korea";

    fout.close(); // disconnect "country" and
    fout.open("capital.txt"); // connect "capital";


    fout << "Washington\n";
    fout << "London\n";
    fout << "Seoul";

    fout.close(); // Disconnect "Capital";

    /// reading the files
    const int N = 80; // size of line
    char line[N];
    ifstream fin; // create input stream
    fin.open("country.txt"); // connect "Country" to it

    cout << "Connects of country file \n";
    while(fin) // check end-of-file
    {
        fin.getline(line, N); // read a lien
        cout << line << "\n"; // display it
    }
    fin.close() ; // disconnect "country" and

    fin.open("capital.txt");
    cout << "\nContents of capital file\n";
    while(fin)
    {
        fin.getline(line, N);
        cout << line << "\n";
    }
    fin.close();
    return 0;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Connects of country file

United State of America

United kingdom

South Korea


Contents of capital file

ashington

London

Seoul


Process returned 0 (0x0)   execution time : 0.061 s
Press any key to continue.
*/

