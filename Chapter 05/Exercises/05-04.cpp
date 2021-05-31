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

     int count;
public:
    vector()
    {
        count = 0;
    }
    void createVector(void);
    void insetVector(void);
    void modifyVector(float number, char key[20]);
    void multiply(float number);
    void displayVector(void);
    friend vector add(vector, vector);
};

vector add(vector v, vector c)
{
    int i,j;
    vector a;
    for(i = 0; i < v.count; i++)
    {
        strcpy(a.key[a.count],v.key[i]);
        a.value[a.count] = v.value[i];
        a.count++;
    }
    for(i = 0; i < c.count; i++)
    {
        strcpy(a.key[a.count],c.key[i]);
        a.value[a.count] = c.value[i];
        a.count++;
    }
 return a;
}
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
     cout << "Enter key" << "\"to end type\"\n\"END\""<<"\t";
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
vector fromhere(vector v)
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
            v.createVector();
            break;
        case 2:
            if(v.count == 0)
            {
                cout<<"Create a vector first\n";
            }
            else
            v.insetVector();
            break;
        case 3:
            if(v.count == 0)
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
            if(v.count == 0)
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
            if(v.count == 0)
            {
                cout<<"Create a vector first\n";
            }
            else
                v.displayVector();
            break;
        case 6:
            return v;
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
    vector v1, v2, v3;
    v1 = fromhere(v1);
    v2 = fromhere(v2);
    v3 = add(v1,v2);
    fromhere(v3);
    return 0;
}

/**
OUTYPUT







-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
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
"END"   a
Value   11
Enter key"to end type"
"END"   b
Value   22
Enter key"to end type"
"END"   c
Value   33
Enter key"to end type"
"END"   d
Value   44
Enter key"to end type"
"END"   e
Value   55
Enter key"to end type"
"END"   END
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
11      22      33      44      55
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
6








-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
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
"END"   m
Value   99
Enter key"to end type"
"END"   n
Value   88
Enter key"to end type"
"END"   b
Value   77
Enter key"to end type"
"END"   v
Value   66
Enter key"to end type"
"END"   END
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
99      88      77      66
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
6








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
11      22      33      44      55      99      88      77      66
Enter your choice
01       Create a Vector
02       Insert a value into vector
03       Modify the value of given element
04       Multiply by a scalar value
05       Display the vector
06       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

*/
