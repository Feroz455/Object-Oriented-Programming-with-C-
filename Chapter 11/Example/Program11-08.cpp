/*
Page 346
program 10.8
File updating :: Random Access
*/
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<fstream>
using namespace std;

//class definition
class INVENTORY
{
    char name[10];
    int code;
    float cost;
public:
    void getdata(void)
    {
        cout << "Enter name: "; cin >> name;
        cout << "Enter code: "; cin >> code;
        cout << "Enter cost: "; cin >> cost;
    }
    void putdata(void)
    {
        cout << setw(10) << name
            << setw(10) << code
            << setprecision(3) << setw(10) << cost
                << endl;
    }
};// End of class defination
//main begin
int main()
{
    INVENTORY item;
    fstream inoutfile; // input / output stream

    inoutfile.open("STOCK.DAT", ios::out| ios::in|ios::ate |ios::binary);

    inoutfile.seekg(0,ios::beg); // go to start

    cout << "CURRENT CONTENT OF STOCK " << "\n";


    while(inoutfile.read((char*)&item, sizeof(item)))
    {
        item.putdata();
    }

    inoutfile.clear(); // turn off FOF flag;

    /*>>>>>>>>>>>>>>>>>ADD one more item <<<<<<<<<<<<<<<*/

    cout << "\nADD IN ITEM\n";
    item.getdata();
    char ch;
    cin.get(ch);

    inoutfile.write((char *) &item , sizeof(item));
    // display the append file
    inoutfile.seekg(0, ios::beg);

    cout << "CONTENTS OF APPENDED FILE\n";
    while(inoutfile.read((char*)&item, sizeof(item)))
    {
        item.putdata();
    }
  //find number of object in the file
    inoutfile.close();
    //-_- LAMO .......WITHOUT CLOSING ACTULLY IT WASN'T WOKING  FOR ME....
    inoutfile.open("STOCK.DAT", ios::out| ios::in|ios::ate |ios::binary);
   inoutfile.seekg(0, ios::end);
    int last = inoutfile.tellg();
    int  n = last / sizeof(item);

    cout << "Number of object = " << n << "\n";
    cout << "Total bytes in the file = " << last << "\n";

    /*>>>>>>>>.MODIFY THE DETAILS OF AN ITEM <<<<<<<<<<<<<<<<<<<*/

    cout << "Enter object number to be update \n";

    int object;
    cin >> object;

    cin.get(ch);

    int location = (object-1) * sizeof(item);

    if(inoutfile.eof());
    inoutfile.clear();


    inoutfile.seekp(location);

    cout << "Enter new values of the object \n";

    item.getdata();

    cin.get(ch);

    inoutfile.write((char *) & item, sizeof(item)) << flush;

    /*>>>>>>>>>SHOW UPDATE FILE<<<<<<<<<<<<<<<<*/

    inoutfile.seekg(0, ios::beg); // go to the start

    cout << "CONTENTS OF UPDATE FILE \n";

    while(inoutfile.read((char *) &item, sizeof(item)))
    {
        item.putdata();
    }
    inoutfile.close();


    getchar();
    return 0;
}
//main end
///Program end

/*
output
CURRENT CONTENT OF STOCK
        AA        11       100
        BB        22       200
        CC        33       300
        CC        33       300
        YY        10       101
        DD        44       400
        XX        99       900
        ww         7       777
        TT        55       500
        UU        66       600
        ii        78       800
        PP        80       800

ADD IN ITEM
Enter name: HH
Enter code: 66
Enter cost: 600
CONTENTS OF APPENDED FILE
        AA        11       100
        BB        22       200
        CC        33       300
        CC        33       300
        YY        10       101
        DD        44       400
        XX        99       900
        ww         7       777
        TT        55       500
        UU        66       600
        ii        78       800
        PP        80       800
        HH        66       600
Number of object = 13
Total bytes in the file = 260
Enter object number to be update
6
Enter new values of the object
Enter name: ZZ
Enter code: 20
Enter cost: 201
CONTENTS OF UPDATE FILE
        AA        11       100
        BB        22       200
        CC        33       300
        CC        33       300
        YY        10       101
        ZZ        20       201
        XX        99       900
        ww         7       777
        TT        55       500
        UU        66       600
        ii        78       800
        PP        80       800
        HH        66       600


Process returned 0 (0x0)   execution time : 43.323 s
Press any key to continue.

*/
