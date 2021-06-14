/*
Page 358
program 11.02
A file Contain a list of telephone numbers in the following from
john 23456
Ahmed 9873
..........
..........

The names contain only one word and the names and telephone numbers are separated by white spaces.Write a program
to read the file and output the list in two columns.The names should be left-justified and the numbers right justified

*/
#include<iostream>
#include<cstdio>
#include<fstream>
#include<iomanip>
using namespace std;

//class definition
class teleNumber
{
    char name[20];
    int number;
public:
    void getData(void)
    {
        cout << "Enter name  :  "; cin >> name;
        cout << "Enter Number:  "; cin >> number;
    }
    void putData()
    {
        cout.setf(ios::left, ios::adjustfield);
        cout << setw(20)<< name;
        cout.setf(ios::right, ios::adjustfield);
        cout << setw(15) << number << endl;
    }
};
//main begin
int main()
{
    fstream file;
    file.open("Program10-02.txt", ios::out);
    file.close();
    file.open("Program10-02.txt", ios::out|ios::in|ios::ate|ios::binary);
    teleNumber T[5];
    int i;
    for(i = 0; i< 2; i++)
    {
        T[i].getData();
        file.write((char *)&T[i], sizeof(T[i]));
    }
    file.seekg(0, ios::beg);
    cout << "\n\n";
    for(i = 0; i< 2; i++)
    {
        file.read((char *)&T[i], sizeof(T[i]));
        T[i].putData();

    }
    file.close();
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter name  :  Firoz_Mahmud
Enter Number:  123698745
Enter name  :  Umbaku
Enter Number:  789314569
Firoz_Mahmud              123698745
Umbaku                    789314569

Process returned 0 (0x0)   execution time : 19.115 s
Press any key to continue.
*/

