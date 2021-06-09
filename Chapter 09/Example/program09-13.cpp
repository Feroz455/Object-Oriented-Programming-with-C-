/*
Page 278
program 9.13
Runtime Polymorphism

*/
#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

//class definition

class media
{
protected:
    char title[50];
    float price;
public:
    media(char *s, float a)
    {
        strcpy(title, s);
        price = a;
    }
    virtual void display() // empty virtual function
    {

    }
};

class book: public media
{
        int pages;
    public:
        book(char *s, float a, int p) : media(s,a)
        {
            pages = p;
        }
        void display();
};
class tape: public media
{
    float time;
public:
    tape(char *s, float a, float t):media(s,a)
    {
        time = t;
    }
    void display();
};
void book::display()
{
    cout << "\nTitle : " << title <<endl;
    cout << "\nPages: " << pages << endl;
    cout << "\nPrice: " << price << endl;
}
void tape::display()
{
    cout << "\nTitle: " << title << endl;
    cout << "\nPlay time : " << time << "mins" <<endl;
    cout << "\nPrice : " << price << endl;
}

//main begin
int main()
{
    char *title = new char[30];
    float price, time;
    int pages;

    // Book details

    cout << "\nEnter Book Details\n";
    cout << "Title : "; cin >> title;
    cout << "Price : "; cin >> price;
    cout << "Pages : "; cin >> pages;

    book book1(title, price, pages);

    //Tape details
    cout << "\tEnter Tape Details\n";
    cout << "Title : "; cin >> title;
    cout << "Price : "; cin >> price;
    cout << "Play time (mins): "; cin >> time;


    tape tape1(title, price, time);

    media* list[2];
    list[0] = &book1;
    list[1] = &tape1;


    cout << "\nMEDIA DETAILS";

    cout << "\n................BOOK...............\n";
    list[0]->display(); // display book details

    cout << "\n...............TAPE.................\n";
    list[1] ->display(); // display tape details
    getchar();
    return 0;
}
//main end
///Program end

/*
output


Enter Book Details
Title : Programming_in_ANSI_C
Price : 88
Pages : 400
        Enter Tape Details
Title : Computing_Concepts
Price : 90
Play time (mins): 55

MEDIA DETAILS
................BOOK...............

Title : Programming_in_ANSI_C

Pages: 400

Price: 88

...............TAPE.................

Title: Computing_Concepts

Play time : 55mins

Price : 90

Process returned 0 (0x0)   execution time : 55.333 s
Press any key to continue.
*/

