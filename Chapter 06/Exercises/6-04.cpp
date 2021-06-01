/*
Page 170
program  6.3
A book shop maintains the inventory of books that are being sold
at the shop.The list includes details such as author , title , price, publisher
and stock position.Whenever a customer wants a book ,the sales person inputs the
title and author and the system searches the list and displays weather it is , -
available or not , if it is not, an appropriate message is displayed.If it is ,
then the system displays the book details and requests for the number of copies
required.If the requested copies are available the total cost of the requested
copies in displayed , otherwise the message "Required copies not in stock" is
displayed Design a system using a class called books with suitable member func-
-tions and constructor .Use new operator in constructors to allocate memory sp-
-ace required
/***************************************************************************
program 6.4
Improve the system design in Exercises 6.3 to incorporate the following features
a) The price of the books should be updated as and when required.
   Use a private member function to implement this
b) The stock value of each book should be automatically  update as soon as a transaction
   is complete
c) The number of successful and unsuccessful transactions should be recorded
for the purpose of statistical analysis Use static data members to keep count
    of transaction.
****************************************************************************
*/

///PLAY WITH THIS PROGRA
#include<iostream>
#include<cstdio>
#include<cstring>
#include<iomanip>
using namespace std;
class BOOKS
{
    char *title;
    int titleLenght;

    char *author;
    int authorlength;

    float price;

    char *publisher;
    int publisherLength;


    int bookshelf;
    int row;
    int numberofBook;

    /**************************
    program 6.4's UPDATE
    *************************/
    static int success;
    static int unsuccess ;
    void updatePrice(float price)
    {
        this->price = price;
    }
public:
    BOOKS()
    {
        titleLenght = 0;
        this->title = new char[titleLenght+1];


        authorlength = 0;
        this->author = new char[authorlength+1];


        this->price = 0;
        publisherLength = 0;
        this->publisher = new char[publisherLength + 1];

        bookshelf = 0;
        row = 0;
        numberofBook = 0;
    }
    //constructor 1
      BOOKS(char *title, char *author, float price, char *publisher, int bookshelf = 0, int row = 0 , int numberofBook = 0)
    {
        titleLenght = strlen(title);
        this->title = new char[titleLenght+1];
        strcpy(this->title,title);

        authorlength = strlen(author);
        this->author = new char[authorlength+1];
        strcpy(this->author, author);

        this->price = price;
        publisherLength = strlen(publisher);
        this->publisher = new char[publisherLength + 1];
        strcpy(this->publisher,publisher);

        this->bookshelf = bookshelf;
        this->row = row;
        this->numberofBook = numberofBook;
    }
     //constructor 2
    BOOKS(char *title, char *author, float price, char *publisher)
    {
        titleLenght = strlen(title);
        this->title = new char[titleLenght+1];
        strcpy(this->title,title);

        authorlength = strlen(author);
        this->author = new char[authorlength+1];
        strcpy(this->author, author);

        this->price = price;
        publisherLength = strlen(publisher);
        this->publisher = new char[publisherLength + 1];
        strcpy(this->publisher, publisher);
        bookshelf = 0;
        row = 0;
        numberofBook = 0;
    }
     //constructor 3
    BOOKS(char *title, char *author, float price)
    {
        titleLenght = strlen(title);
        this->title = new char[titleLenght+1];
        strcpy(this->title,title);

        authorlength = strlen(author);
        this->author = new char[authorlength+1];
        strcpy(this->author, author);

        this->price = price;

        publisherLength = 0;
        this->publisher = new char[publisherLength + 1];
        strcpy(this->publisher, "UNKNOWN");

        bookshelf = 0;
        row = 0;
        numberofBook = 0;
    }
     //constructor 4
    BOOKS(char *title, char *author)
    {
        titleLenght = strlen(title);
        this->title = new char[titleLenght+1];
        strcpy(this->title,title);

        authorlength = strlen(author);
        this->author = new char[authorlength+1];
        strcpy(this->author, author);

        this->price = 0;

        publisherLength = 0;
        this->publisher = new char[publisherLength + 1];
        strcpy(this->publisher, "UNKNOWN");
        bookshelf = 0;
        row = 0;
        numberofBook = 0;
    }

    //Display data
    void display(void)
    {
        cout << title << "\t" << author << "\t" << price << "\t" << publisher << "\t" << numberofBook <<  endl;
    }
    ///display data with position
     void displayWithPosition(void)
    {
       cout << title << "\t"
            << author << "\t"
            << price  << "\t"
            << publisher  << "\n"
            <<"Bookself = "<< bookshelf << "\t"
            << "Row = " << row << "\n"
            <<endl;
    }
    void RequireCopies(int numberofBook)
    {
        if(numberofBook > this->numberofBook)
        {
            cout << "Required copies not in stock\n";
            cout << "We have = " << this->numberofBook << endl;
            unsuccess++;


        }
        else
        {
            cout <<setw(30) << "Number of copies " << numberofBook << " x " << this->price << "\n";
            cout <<setw(30) << "TOTAL PRICE = " << float(numberofBook)*this->price;
            cout <<setw(30) << "THANK YOU !!!\n";
            /*
            The stock value of each book should be automatically
            update as soon as a transaction is complete
            */
            this->numberofBook -= numberofBook;
            success++;
        }
    }
    /************************
    The price of the books should be updated as and when required.
    Use a private member function to implement this
    *************************/
    void ExUPDATE(float price)
    {

        updatePrice(price);
    }
    /*
         The number of successful and unsuccessful transactions should be recorded
         for the purpose of statistical analysis Use static data members to keep count
         of transaction.
    */
    static void  staticVariableShow(void)
    {
        cout << "Successful   = " << success << endl;
        cout << "Unsuccessful = " << unsuccess << endl;
    }
    friend int find(char *title, char *author, BOOKS B);
};

///friend function definition
int find(char *title, char *author, BOOKS B)
 {
     int t = strcmp(B.title, title);
     int a = strcmp(B.author, author);
     if(t == 0 && a == 0)
        return 1;
     else
        return 0;
 };
int BOOKS :: success = 0;
int BOOKS :: unsuccess = 0;
//for Style
 void printDash(int i = 30)
 {
       cout << "\n";
     while(i > 0)
     {
         cout << "-_";
         i--;
     }
     cout << "\n";
 }

//for Style
 void printNewLine(int i = 25)
 {
      while(i > 0)
     {
         cout << "\n";
         i--;
     }
 }


 void displayManu(void)
 {
     cout << "\t1 \t" << "INSERT NEW RECORD" << endl;
     cout << "\t2 \t" << "DISPLAY ALL RECOED " << endl;
     cout << "\t3 \t" << "DISPLAY ALL RECORD WITH POSITION" << endl;
     cout << "\t4 \t" << "FIND A RECORD" << endl;
     cout << "\t5 \t" << "FIND A RECORN WITH POSITION" << endl;
     cout << "\t6 \t" << "UPDATE PRISE OF A BOOK" <<endl;
     cout << "\t7 \t" << "SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION" <<endl;
     cout << "\t8 \t" << "QUIT" << endl;
 }

 //let's get into program
 void PROGRAMLOOP(void)
 {
    int i;
    int check ;
    int count = 1;
    char title[30];
    char author[30];
    char publisher[30];
    float price;
    int bookshelf;
    int row;
    int numberofBook;

    BOOKS *B[40];
    printNewLine();
    while(1)
    {
        printDash();
        cout << "\n";
        displayManu();
        printDash();
        cin >> i;
        switch(i)
        {
        case 1:
             cout << "VALID INPUT\t" << "INSERT NEW RECORD" << endl;;
             B[count] = new BOOKS[1];
             printNewLine(3);
             cout << "Enter details\n";
             printNewLine(2);
             cout << "BOOK Title             \t"; cin >> title ;
             cout << "Author name            \t"; cin >> author;
             cout << "Price                  \t"; cin >> price;
             cout << "Publisher              \t"; cin >> publisher;
             cout << "Number of Book         \t"; cin >> numberofBook;
             cout << "Bookshelf Number       \t"; cin >> bookshelf;
             cout << "Bookshelf Row number   \t"; cin  >> row;
             *B[count] = BOOKS(title,author, price, publisher ,bookshelf,row ,numberofBook);
             count++;
            break;
        case 2:
            if(count <= 1)
            {
                cout << "First Enter Records";cout << "\n";
                break;
            }
            cout << "VALID INPUT\t" << "DISPLAY ALL RECOED " << endl;
            printDash();
            for(int i = 1; i < count; i++)
            {
                 B[i]->display();
                 cout << "\n";
            }
            printDash();
            break;
        case 3:
            if(count <= 1)
            {
                cout << "First Enter Records";
                break;
            }
            cout << "VALID INPUT\t" << "DISPLAY ALL RECORD WITH POSITION" << endl;
            printDash();
            for(int i = 1; i < count; i++)
            {
                 B[i]->displayWithPosition();
                 cout << "\n";
            }
            printDash();
            break;
        case 4:
            if(count <= 1)
            {
                cout << "First Enter Records";cout << "\n";
                break;
            }
            cout << "VALID INPUT\t" << "FIND A RECORD" << endl;
            cout << "BOOK Title             \t"; cin >> title ;
            cout << "Author name            \t"; cin >> author;
            check = 0;
            for(int i = 1; i < count; i++)
            {
                if(find(title,author,*B[i]))
                {
                B[i]->display();
                cout << "\n";
                printDash();
                cout << "Required  copies ??\t"; cin >> numberofBook ;
                B[i]->RequireCopies(numberofBook);
                check = 1;
                i = count;
                }
            }
            if(!check)
                cout << "BOOK NOT FOUND!!\n";
            break;
        case 5:
            if(count <= 1)
            {
                cout << "First Enter Records";cout << "\n";
                break;
            }
            cout << "VALID INPUT\t" << "FINF A RECORN WITH POSITION" << endl;
            cout << "VALID INPUT\t" << "FIND A RECORD" << endl;
            cout << "BOOK Title             \t"; cin >> title ;
            cout << "Author name            \t"; cin >> author;
            check = 0;
            for(int i = 1; i < count; i++)
            {
                if(find(title,author,*B[i]))
                {
                B[i]->displayWithPosition();
                cout << "\n";
                printDash();
                cout << "Required  copies ??\t"; cin  >> numberofBook ;
                B[i]->RequireCopies(numberofBook);
                check = 1;
                i = count;
                }
            }
            if(!check)
                cout << "BOOK NOT FOUND!!\n";
            break;
        case 6:
            cout << "VALID INPUT\t" << "UPDATE PRISE OF A BOOK" <<endl;
            if(count <= 1)
            {
                cout << "First Enter Records";cout << "\n";
                break;
            }
            cout << "VALID INPUT\t" << "FIND A RECORD" << endl;
            cout << "BOOK Title             \t"; cin >> title ;
            cout << "Author name            \t"; cin >> author;
            check = 0;
            for(int i = 1; i < count; i++)
            {
                if(find(title,author,*B[i]))
                {
                B[i]->display();
                cout << "\n";
                printDash();
                cout << "NEW PRICE ??\t"; cin >> price ;
                B[i]->ExUPDATE(price);
                check = 1;
                i = count;
                }
            }
            if(!check)
                cout << "BOOK NOT FOUND!!\n";

            break;
        case 7:
            cout << "VALID INPUT" << "SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION" <<endl;
            BOOKS::staticVariableShow();
            break;
        case 8:
            cout << "VALID INPUT\t" << "QUIT" << endl;
            exit(0);
            break;
        default:
            cout << "INVALID INPUT" << "\a" << "\n";
            cout << "TRY AGAIN!!!" << "\n";
            break;
        }
    }
 }
///main begin
/**WE are here -_- */
int main()
{
    PROGRAMLOOP();
    getchar();
    return 0;
}
///main end
///Program end

/*
output
-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
First Enter Records

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              aaaa
Author name             aaaa
Price                   10
Publisher               aaaa
Number of Book          10
Bookshelf Number        1
Bookshelf Row number    1

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              bbbbb
Author name             bbbbb
Price                   10
Publisher               bbbbb
Number of Book          10
Bookshelf Number        1
Bookshelf Row number    1

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
3
VALID INPUT     DISPLAY ALL RECORD WITH POSITION

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaaa    aaaa    10      aaaa
Bookself = 1    Row = 1


bbbbb   bbbbb   10      bbbbb
Bookself = 1    Row = 1



-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaaa    aaaa    10      aaaa    10

bbbbb   bbbbb   10      bbbbb   10


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
6
VALID INPUT     UPDATE PRISE OF A BOOK
VALID INPUT     FIND A RECORD
BOOK Title              aaaa
Author name             aaaa
aaaa    aaaa    10      aaaa    10


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
NEW PRICE ??    15

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaaa    aaaa    15      aaaa    10

bbbbb   bbbbb   10      bbbbb   10


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              tttt
Author name             tttt
Price                   10
Publisher               tttt
Number of Book          15
Bookshelf Number        1
Bookshelf Row number    0

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaaa    aaaa    15      aaaa    10

bbbbb   bbbbb   10      bbbbb   10

tttt    tttt    10      tttt    15


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
5
VALID INPUT     FINF A RECORN WITH POSITION
VALID INPUT     FIND A RECORD
BOOK Title              tttt
Author name             tttt
tttt    tttt    10      tttt
Bookself = 1    Row = 0



-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
Required  copies ??     12
             Number of copies 12 x 10
                TOTAL PRICE = 120                THANK YOU !!!

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaaa    aaaa    15      aaaa    10

bbbbb   bbbbb   10      bbbbb   10

tttt    tttt    10      tttt    3


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
7
VALID INPUTSHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
Successful   = 1
Unsuccessful = 0

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
4
VALID INPUT     FIND A RECORD
BOOK Title              bbbb
Author name             bbbb
BOOK NOT FOUND!!

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaaa    aaaa    15      aaaa    10

bbbbb   bbbbb   10      bbbbb   10

tttt    tttt    10      tttt    3


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
4
VALID INPUT     FIND A RECORD
BOOK Title              bbbbb
Author name             bbbbb
bbbbb   bbbbb   10      bbbbb   10


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
Required  copies ??     20
Required copies not in stock
We have = 10

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
7
VALID INPUTSHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
Successful   = 1
Unsuccessful = 1

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_

        1       INSERT NEW RECORD
        2       DISPLAY ALL RECOED
        3       DISPLAY ALL RECORD WITH POSITION
        4       FIND A RECORD
        5       FIND A RECORN WITH POSITION
        6       UPDATE PRISE OF A BOOK
        7       SHWO SUCCESSFFULL AND UNSUCCESSDUL TRANSITION
        8       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
8
VALID INPUT     QUIT

Process returned 0 (0x0)   execution time : 231.986 s
Press any key to continue.
*/

