/*
Page 342
program 11.06

*/
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<fstream>
using namespace std;

//class definition
class INVENTORY
{
    char name[10]; // item name
    int code;  // item code
    float cost; // cost of each item

public:
    void readdata(void);
    void writedata(void);
};

void INVENTORY :: readdata(void) // read data from keyboard
{
    cout << "Enter name: "; cin >> name;
    cout << "Enter code: "; cin >> code;
    cout << "Enter cost: "; cin >> cost;
}
void INVENTORY :: writedata(void) // formatted display on screen
{
    cout.setf(ios::left, ios::adjustfield);
    cout << setw(10) << name
         << setiosflags(ios::right)
         << setw(10) << code
         << setprecision(5)
         << setw(10) << cost
         << endl;
}
//main begin
int main()
{
    int i ;
    INVENTORY item[3]; // Declare array of 3 objects
    fstream file; // input and output file
    file.open("STOCK.DAT",ios::out);
    file.close();
    file.open("STOCK.DAT", ios::in|ios::out);

    cout << "ENTER DETAILS FOR THREE ITEMS\n";
    for(i = 0; i < 3; i++)
    {
        item[i].readdata();
        file.write((char*) & item[i], sizeof(item[i]));
    }
    file.seekg(0, ios::beg); // reset to start

    cout << "\nOUTPUT \n\n\n";
    for(i = 0; i < 3; i++)
    {
        file.read((char *) &item[i], sizeof(item[i]));
        item[i].writedata();
    }
    file.close();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
ENTER DETAILS FOR THREE ITEMS
Enter name: C++
Enter code: 101
Enter cost: 175
Enter name: FORTRUN
Enter code: 102
Enter cost: 150
Enter name: JAVA
Enter code: 115
Enter cost: 225

OUTPUT


C++              101       175
FORTRUN          102       150
JAVA             115       225

Process returned 0 (0x0)   execution time : 32.753 s
Press any key to continue.
*/
