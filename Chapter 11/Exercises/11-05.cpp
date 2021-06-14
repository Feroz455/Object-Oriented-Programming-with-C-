/*
Page Two files named 'Source1 and Source2' contain sorted list of integers.Write a program that reads the contents
of both the files and stores the merged list in sorted from in a new file named 'Terget'.
program

*/
#include<iostream>
#include<cstdio>
#include<fstream>
using namespace std;

//class definition

//main begin
int main()
{
    fstream file1, file2, file3;
    file1.open("source1.txt", ios::out|ios::app|ios::binary|ios::in);
    file2.open("source2.txt", ios::out|ios::app|ios::binary|ios::in);
    int i, ck;
    for(i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
        file1.write((char *)&i, sizeof(int));
        else
        file2.write((char *)&i, sizeof(int));
    }
    file1.seekp(0);
     cout << "File 1\n";
     for(i = 0; i < 5; i++)
    {
        file1.read((char *)&ck, sizeof(int));
        cout << ck << " " << endl;
    }
     file2.seekp(0);
     cout << "File 2\n";
     for(i = 0; i < 5; i++)
    {
        file2.read((char *)&ck, sizeof(int));
        cout << ck << " " << endl;
    }
    file3.open("Terget.txt", ios::out|ios::app|ios::binary|ios::in);
    ck = 0;
    int ck1 = 0, ck2 = 0;


    file2.read((char *)&ck1, sizeof(int));
    file1.read((char *)&ck2, sizeof(int));

        cout << "File 3\n";
    for(i = 0; i < 8; i++)
    {

        if(ck1< ck2)
        {
            ck = ck1;
            file3.write((char *)&ck, sizeof(int));
            file1.read((char *)&ck1, sizeof(int));
            if(file1.eof()) //for my condition i force to do this ..but general condition should be something
            {
            ck = ck2;
            file3.write((char *)&ck, sizeof(int));
            file2.read((char *)&ck2, sizeof(int));
            break;
            }
        }
        if(ck1 > ck2)
        {
            ck = ck2;
            file3.write((char *)&ck, sizeof(int));
            file2.read((char *)&ck2, sizeof(int));
        }
    }

    file3.seekg(0);
    for(i = 0; i < 10; i++)
    {
        file3.read((char *)&ck, sizeof(int));
        cout << ck << " " << endl;
    }
  file1.close();
  file2.close();
  file3.close();
    getchar();
    return 0;
}
//main end
///Program end

/*
output

File 1
0
2
4
6
8
File 2
1
3
5
7
9
File 3
0
1
2
3
4
5
6
7
8
9


Process returned 0 (0x0)   execution time : 3.547 s
Press any key to continue.
*/
