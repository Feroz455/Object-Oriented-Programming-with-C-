/*
Page 358
program 11.04
Write a interactive , menu driven program that will access the file created in exercises 10.3
and implement the following tasks
a) Determine the telephone number of the specified person
b) Determine the name if telephone number us known
c) Update the telephone number ,whenever there is a change

*/
#include<iostream>
#include<cstdio>
#include<iomanip>
#include<fstream>
#include<cstring>
using namespace std;

//class definition
class TelephoneBook
{
    char name[20];
    char number[20];
    int id;
public:
    void setRecord()
    {
        cout << "Enter name  "; cin >> name;
        cout << "Enter id "; cin >> id;
        cout << "Enter number "; cin >> number;

    }
     void setRecord(char *name, int id)
    {
        strcpy(this->name,name);
        this->id = id;
        cout << "Enter number "; cin >> number;

    }
    void showRecord()
    {
        cout << id << "\t\t";
        cout.setf(ios::left, ios::adjustfield);
        cout << setw(20)<< name;
        cout.setf(ios::right, ios::adjustfield);
        cout << setw(15) << number << endl;

    }
    int GetId()
    {
        return id;
    }
    char *GetName()
    {
        return name;
    }
    char *GetNumber()
    {
        return number;
    }
};

void printLine(int i = 50)
{
    while(i)
    {
        cout << "_-";
        i--;
    }
    cout << "\n";
}
void printNewLien(int i = 25)
{
    while(i)
    {
       cout << "\n";
       i--;
    }
}
void Manu()
{
    cout << "1\t" << "Create a Record" << endl;
    cout << "2\t" << "Show all record" << endl;
    cout << "3\t" << "Search by Name" << endl;
    cout << "4\t" << "Search by number" << endl;
    cout << "5\t" << "Search by id" << endl;
    cout << "6\t" << "Modify Number" << endl;
    cout << "7\t" << "Exit" << endl;
}
void start()
{
    int i, j, ck = 0, id,tempID;
    char name[20], *tempName, number[20], *tempNumber, choice;
    TelephoneBook N;
    streampos tempPosition,StrPo, EndPo, objectSize;
    fstream FILE("PhoneBook.txt", ios::out|ios::ate|ios::binary|ios::app);
    FILE.close();
    printNewLien();
    while(1)
    {
        printLine();
        Manu();
        printLine();
        cout << "Enter your Choice\n";
        cin >> choice;
        switch(choice)
        {
        case '1':
            cout << "1\t" << "Create a Record" << endl;
            FILE.open("PhoneBook.txt", ios::out|ios::ate|ios::binary|ios::app);
            N.setRecord();
            FILE.write((char *)&N, sizeof(N));
            FILE.close();
            break;
        case '2':
            cout << "2\t" << "Show all record" << endl;
            FILE.open("PhoneBook.txt", ios::binary|ios::in);


            FILE.seekg(0, ios::beg);
            StrPo = FILE.tellg();
            FILE.seekg(0, ios::end);
            EndPo = FILE.tellg();
            objectSize = EndPo / sizeof(N);
            FILE.seekg(0, ios::beg);



            for(i = 0; i < objectSize; i++)
            {
                FILE.read((char *) &N, sizeof(N));
                N.showRecord();
            }
            FILE.close();
            break;
        case '3':
            cout << "3\t" << "Search by Name" << endl;
            FILE.open("PhoneBook.txt", ios::binary|ios::in);


            FILE.seekg(0, ios::beg);
            StrPo = FILE.tellg();
            FILE.seekg(0, ios::end);
            EndPo = FILE.tellg();
            objectSize = EndPo / sizeof(N);
            FILE.seekg(0, ios::beg);


            cout << "Enter name\n";
            cin >> name;
            for(i = 0; i < objectSize; i++)
            {
                FILE.read((char *) &N, sizeof(N));
                tempName = N.GetName();
                if(strcmp(name,tempName) == 0)
                {
                    N.showRecord();
                    ck  = 1;
                }

            }
            if(!ck)
                cout << "Search not found\n\n";
            ck = 0;
            FILE.close();
            break;
        case '4':
            cout << "4\t" << "Search by number" << endl;
             FILE.open("PhoneBook.txt", ios::binary|ios::in);


            FILE.seekg(0, ios::beg);
            StrPo = FILE.tellg();
            FILE.seekg(0, ios::end);
            EndPo = FILE.tellg();
            objectSize = EndPo / sizeof(N);
            FILE.seekg(0, ios::beg);


            cout << "Enter number\n";
            cin >> number;
            for(i = 0; i < objectSize; i++)
            {
                FILE.read((char *) &N, sizeof(N));
                tempNumber = N.GetNumber();
                if(strcmp(number,tempNumber) == 0)
                {
                    N.showRecord();
                    ck  = 1;
                }

            }
            if(!ck)
                cout << "Search not found\n\n";
            ck = 0;
            FILE.close();
            break;
        case '5':
            cout << "5\t" << "Search by id" << endl;
             FILE.open("PhoneBook.txt", ios::binary|ios::in);


            FILE.seekg(0, ios::beg);
            StrPo = FILE.tellg();
            FILE.seekg(0, ios::end);
            EndPo = FILE.tellg();
            objectSize = EndPo / sizeof(N);
            FILE.seekg(0, ios::beg);


            cout << "Enter id\n";
            cin >> id;
            for(i = 0; i < objectSize; i++)
            {
                FILE.read((char *) &N, sizeof(N));
                tempID = N.GetId();
                if(id == tempID)
                {
                    N.showRecord();
                    ck  = 1;
                }

            }
            if(!ck)
                cout << "Search not found\n\n";
            ck = 0;
            FILE.close();
            break;
        case '6':
            cout << "6\t" << "Modify Number" << endl;
              FILE.open("PhoneBook.txt", ios::binary|ios::in|ios::ate|ios::out);


            FILE.seekg(0, ios::beg);
            StrPo = FILE.tellg();
            FILE.seekg(0, ios::end);
            EndPo = FILE.tellg();
            objectSize = EndPo / sizeof(N);
            FILE.seekg(0, ios::beg);


            cout << "Enter name\n";
            cin >> name;
            for(i = 0; i < objectSize; i++)
            {
                FILE.read((char *) &N, sizeof(N));
                tempName = N.GetName();
                tempID = N.GetId();
                if(strcmp(name,tempName) == 0)
                {

                    tempPosition = FILE.tellg();
                    N.showRecord();
                    ck  = 1;
                    //fflush(stdin);
                    N.setRecord(tempName, tempID);
                    FILE.seekp((i)*sizeof(N), ios::beg);
                    FILE.write((char *) &N, sizeof(N));
                    break;
                }

            }
            if(!ck)
                cout << "Search not found\n\n";
            ck = 0;
            FILE.close();
            break;
        case '7':
            cout << "7\t" << "Exit" << endl;
            exit(1);
        default:
            cout << "INVALIDE INPUTE\nTRY AGAIN!!!\n" << endl;
            break;
        }
    }

}
//main begin
int main()
{
    start();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
1
1       Create a Record
Enter name  Firoz
Enter id 1
Enter number 123
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
1
1       Create a Record
Enter name  Maliha
Enter id 2
Enter number 147
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
1
1       Create a Record
Enter name  Oishee
Enter id 3
Enter number 159
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
2
2       Show all record
1               Firoz                           123
2               Maliha                          147
3               Oishee                          159
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
6
6       Modify Number
Enter name
Maliha
2               Maliha                          147
Enter number 55555
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
2
2       Show all record
1               Firoz                           123
2               Maliha                        55555
3               Oishee                          159
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
6
6       Modify Number
Enter name
Oishee
3               Oishee                          159
Enter number 888
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
2
2       Show all record
1               Firoz                           123
2               Maliha                        55555
3               Oishee                          888
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
1       Create a Record
2       Show all record
3       Search by Name
4       Search by number
5       Search by id
6       Modify Number
7       Exit
_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-
Enter your Choice
7
7       Exit

Process returned 1 (0x1)   execution time : 67.268 s
Press any key to continue.
*/
