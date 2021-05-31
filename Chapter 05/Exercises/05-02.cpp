/*
page 143
program 5.2
Write a class to represent a vector (a series of float value). include member
function to perform the following tasks
a) To create the vector
b) To modify the value of a given element
c) To multiply by a scalar value
d) to display the vector in the form(10,20,30....)
Write a program
*/
#include<iostream>
#include<cstring>
using namespace std;
class vector
{
    float value[50];
    char key[50][20];
public:

    static int count;
public:
    void createVector(void);
    void insetVector(void);
    void modifyVector(float number, char key[20]);
    void multiply(float number);
    void displayVector(void);
};
int vector :: count = 0;
void vector :: insetVector()
{
     cout << "Enter key"<< "\t";
     cin >> key[count];
     cout << "Value" <<"\t";
     cin >> value[count];
     count++;

}
void vector :: createVector()
{
    cout << "Enter key" << "\"to end type\"\n\"END\""<<"\t";
    cin >> key[count];
    while(strcmp(key[count],"END") != 0)
    {
     cout << "Value" <<"\t";
     cin >> value[count];
     count++;
     cout << "key" << "to end type \"END\""<< "\t";
     cin >> key[count];
    }

};

void vector::modifyVector(float number, char key[])
{
    int i;
    for(i = 0; i<= count; i++)
    {
        if(strcmp(this->key[i],key) == 0)
        {
            value[i] = number;
        }
    }
    cout << "Number not found !!!";

};
void vector::multiply(float number)
{
    for(int i = 0; i <= count; i++)
    {
        this->value[i] *=number;
    }
};
void vector :: displayVector(void)
{
     for(int i = 0; i < count; i++)
    {
        cout << value[i] << "\t";
    }
    cout << "\n";
}

void displayManu(void)
{
    cout << "Enter your choice\n";
    cout << "01\t Create a Vector" << endl;
    cout << "02\t Insert a value into vector" << endl;
    cout << "03\t Modify the value of given element" << endl;
    cout << "04\t Multiply by a scalar value" << endl;
    cout << "05\t Display the vector " << endl;
    cout << "06\t QUIT" << endl;
}
void printNewLine(int i = 20)
{
    for(int j = 0; j < i; j++)
    {
        cout << "\n";
    }
}
void printDash(int i = 55)
{
    cout << "\n";
    for(int j = 0; j < i; j++)
    {
        cout << "-_";
    }
    cout << "\n";
}
void fromhere(void)
{
    int i;
    float number;
    char key[20];
    printNewLine();
    printDash();
    while(1)
    {
        displayManu();
        printDash();
        cin >> i;
        switch(i)
        {
        case 1:
            vector v;
            v.createVector();
            break;
        case 2:
            if(vector::count == 0)
            {
                cout<<"Create a vector first\n";
            }
            else
            v.insetVector();
            break;
        case 3:
            if(vector::count == 0)
            {
                cout<<"Create a vector first\n";
            }
            else
            {
                cout << "Enter key \n";
                cin >> key;
                cout << "Enter value\n";
                cin >> number;
                v.modifyVector(number, key);
            }
            break;
        case 4:
            if(vector::count == 0)
            {
                cout<<"Create a vector first\n";
            }
            else
            {
                cout << "Enter scaler value\n";
                cin >> number;
                v.multiply(number);
            }
            break;
        case 5:
            if(vector::count == 0)
            {
                cout<<"Create a vector first\n";
            }
            else
                v.displayVector();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "Invalid input\n";
            cout << "Try again...\n";
            break;
        }
    }
}

int main()
{
    fromhere();
    return 0;
}
/*
output
-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
Create a vector first
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
Enter key"to end type"
"END"   Firoz
Value   7896
keyto end type "END"    Maliha
Value   4856
keyto end type "END"    hasan
Value   1458
keyto end type "END"    END
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
3
Enter key
hasan
Enter value
1111
Number not found !!!Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
7896    4856    1111
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
4
Enter scaler value
2
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
15792   9712    2222
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
6

Process returned 0 (0x0)   execution time : 78.372 s
Press any key to continue.
*/
