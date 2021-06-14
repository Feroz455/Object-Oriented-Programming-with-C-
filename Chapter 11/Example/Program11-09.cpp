/*
Page 352
program 11.9
Command-line Argument

*/
#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstdlib>
using namespace std;

//class definition

//main begin
int main(int argc, char *argv[])
{
    int number[9] = {11,22,33,44,55,66,77,88,99};
    if(argc != 3)
    {
        cout << "argc = " << argc << "\n";
        cout << "ERROR In argument\n";
        exit(1);
    }
    ofstream fout1, fout2;

    fout1.open(argv[1]);
    if(fout1.fail())
    {
        cout << "could not open the file"
        << argv[1] << "\n";
        exit(1);
    }
    fout2.open(argv[2]);

    if(fout2.fail())
    {
        cout << "could not open file "
        << argv[2] << "\n";
        exit(1);
    }
    int i;
    for(i = 0; i < 9; i++)
    {
        if(number[i] % 2 == 0)
        {
            fout2 << number[i] << " " ; // write to even file
        }
         else
            fout1<< number[i] << " "; // write to odd file

    }
    fout1.close();
    fout2.close();

    ifstream fin;
    char ch;

    for(i = 1; i < argc; i++)
    {
        fin.open(argv[i]);
        cout << "Contents of " << argv[i] << "\n";
        do
        {
            fin.get(ch); // read a value
            cout << ch; // display it;
        }
        while(fin);
        cout << "\n\n";
        fin.close();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Microsoft Windows [Version 10.0.19041.928]
(c) Microsoft Corporation. All rights reserved.

C:\Users\SUPERSONIC>cd C:\Users\SUPERSONIC\Desktop\C++\Chapter 11\Example

C:\Users\SUPERSONIC\Desktop\C++\Chapter 11\Example>ls
'ls' is not recognized as an internal or external command,
operable program or batch file.

C:\Users\SUPERSONIC\Desktop\C++\Chapter 11\Example>dir
 Volume in drive C has no label.
 Volume Serial Number is 5444-A5D5

 Directory of C:\Users\SUPERSONIC\Desktop\C++\Chapter 11\Example

06/11/2021  11:20 AM    <DIR>          .
06/11/2021  11:20 AM    <DIR>          ..
06/11/2021  10:20 AM               144 Employee.dat
06/10/2021  05:26 PM             1,493 Program11-01.cpp
06/10/2021  08:41 PM             1,606 Program11-02.cpp
06/10/2021  10:03 PM             1,183 Program11-03.cpp
06/10/2021  10:27 PM             1,136 Program11-04.cpp
06/10/2021  10:39 PM               920 Program11-05.cpp
06/11/2021  02:14 AM             1,944 Program11-06.cpp
06/11/2021  10:22 AM            66,306 Program11-06.exe
06/11/2021  10:22 AM            10,929 Program11-06.o
06/11/2021  09:29 AM             1,180 Program11-07.cpp
06/11/2021  10:20 AM            61,334 Program11-07.exe
06/11/2021  10:20 AM             5,769 Program11-07.o
06/11/2021  10:59 AM             4,375 Program11-08.cpp
06/11/2021  10:39 AM            68,176 Program11-08.exe
06/11/2021  10:39 AM            10,557 Program11-08.o
06/11/2021  11:20 AM             1,465 Program11-09.cpp
06/11/2021  11:20 AM            61,931 Program11-09.exe
06/11/2021  11:20 AM             4,601 Program11-09.o
06/11/2021  10:40 AM               260 STOCK.DAT
              19 File(s)        305,309 bytes
               2 Dir(s)  161,005,813,760 bytes free

C:\Users\SUPERSONIC\Desktop\C++\Chapter 11\Example>Program11-09 ODD EVEN
Contents of ODD
11 33 55 77 99

Contents of EVEN
22 44 66 88

*/

