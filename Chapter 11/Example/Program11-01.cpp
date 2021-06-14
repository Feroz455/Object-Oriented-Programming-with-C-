/*
Page 329
program 11.01
Working with single file
Creating files with constructor function
*/
#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

//class definition

//main begin
int main()
{
    ofstream outf("ITEM.txt");                          // connect ITEM file to outf

    cout << "Enter item name: ";
    char name[30];
    cin >> name;                                        //get name from keyboard and
    outf << name << "\n";                               // write to file ITEM

    cout << "Enter item cost: ";
    float cost;

    cin >> cost;                                        // get cost from keyboard and

    outf << cost << "\n";                                // write to file ITEM
    outf.close();



    ifstream inf("ITEM.txt");                           // connect ITEM file to inf
    inf >> name;                                        // read name from file ITEM;
    inf >> cost;                                        // read cost from file ITEM
    cout <<"\n";

    cout << "Item name : " << name << "\n";
    cout << "Item cost : " << cost << "\n";
    inf.close();                                         // Disconnect ITEM From inf
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter item name: CD-ROM
Enter item cost: 250

Item name : CD-ROM
Item cost : 250

Process returned 0 (0x0)   execution time : 90.078 s
Press any key to continue.
*/

