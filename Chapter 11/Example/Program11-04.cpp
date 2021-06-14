/*
Page 338
program  11-04
I/O Operations on characters

*/
#include<iostream>
#include<cstdio>
#include<fstream>
#include<cstring>
using namespace std;

//class definition

//main begin
int main()
{
    char string[80];
    cout << "Enter a string: ";
    cin >> string;

    int len = strlen(string);
    fstream file; // input and output stream
    cout << "\nOpening the 'TEXT' file and storing the string in it\n\n";
    file.open("TEXT.txt", ios:: out); /// file.open("TEXT.txt", ios:: out|ios::in);  file was't creating ... thats why i open file in out mode first to create
    file.close();
    file.open("TEXT.txt", ios:: out|ios::in);

    for(int i = 0; i < len; i++)
    {
        file.put(string[i]);
    }
    file.seekg(0,ios::beg); // go to start

    char ch;

    cout << "Reading the file contents: ";
    while(file)
    {
        cout << ch; // if this line is under  file.get(ch) this line then last character was printing two times
        file.get(ch); // get character from file

    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

