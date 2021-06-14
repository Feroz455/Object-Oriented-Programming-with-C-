/*
Page 358
program 11.03
Write a program that will create a data file containing the list of telephone numbers given in Exercises
11.2 Use a class object to store each set data

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
