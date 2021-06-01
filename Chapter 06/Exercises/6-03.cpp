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
        }
        else
        {
            cout <<setw(30) << "Number of copies " << numberofBook << " x " << this->price << "\n";
            cout <<setw(30) << "TOTAL PRICE = " << float(numberofBook)*this->price;
            cout <<setw(30) << "THANK YOU !!!\n";
            this->numberofBook -= numberofBook;
        }
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

//for Style
 void printDash(int i = 20)
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
     cout << "1 \t" << "INSERT NEW RECORD" << endl;
     cout << "2 \t" << "DISPLAY ALL RECOED " << endl;
     cout << "3 \t" << "DISPLAY ALL RECORD WITH POSITION" << endl;
     cout << "4 \t" << "FIND A RECORD" << endl;
     cout << "5 \t" << "FIND A RECORN WITH POSITION" << endl;
     cout << "6 \t" << "QUIT" << endl;
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
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
14
INVALID INPUT
TRY AGAIN!!!
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              aaa
Author name             bbb
Price                   12
Publisher               eee
Number of Book          1
Bookshelf Number        1
Bookshelf Row number    1
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
3
VALID INPUT     DISPLAY ALL RECORD WITH POSITION

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaa     bbb     12      eee
Bookself = 1    Row = 1



-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaa     bbb     12      eee     1


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              vvvv
Author name             vvvv
Price                   10
Publisher               vvvv
Number of Book          10
Bookshelf Number        2
Bookshelf Row number    1
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              bbbbb
Author name             bbbbb
Price                   54
Publisher               bbbbb
Number of Book          12
Bookshelf Number        1
Bookshelf Row number    58
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
3
VALID INPUT     DISPLAY ALL RECORD WITH POSITION

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaa     bbb     12      eee
Bookself = 1    Row = 1


vvvv    vvvv    10      vvvv
Bookself = 2    Row = 1


bbbbb   bbbbb   54      bbbbb
Bookself = 1    Row = 58



-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaa     bbb     12      eee     1

vvvv    vvvv    10      vvvv    10

bbbbb   bbbbb   54      bbbbb   12


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              qqqqq
Author name             qqqq
Price                   25
Publisher               qqqqq
Number of Book          10
Bookshelf Number        1
Bookshelf Row number    3
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
3
VALID INPUT     DISPLAY ALL RECORD WITH POSITION

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaa     bbb     12      eee
Bookself = 1    Row = 1


vvvv    vvvv    10      vvvv
Bookself = 2    Row = 1


bbbbb   bbbbb   54      bbbbb
Bookself = 1    Row = 58


qqqqq   qqqq    25      qqqqq
Bookself = 1    Row = 3



-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaa     bbb     12      eee     1

vvvv    vvvv    10      vvvv    10

bbbbb   bbbbb   54      bbbbb   12

qqqqq   qqqq    25      qqqqq   10


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1
VALID INPUT     INSERT NEW RECORD



Enter details


BOOK Title              rrrrr
Author name             rrrrr
Price                   44
Publisher               ttttr
Number of Book          45
Bookshelf Number        1
Bookshelf Row number    3
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
2
VALID INPUT     DISPLAY ALL RECOED

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
aaa     bbb     12      eee     1

vvvv    vvvv    10      vvvv    10

bbbbb   bbbbb   54      bbbbb   12

qqqqq   qqqq    25      qqqqq   10

rrrrr   rrrrr   44      ttttr   45


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
4
VALID INPUT     FIND A RECORD
BOOK Title              aaaa
Author name             aaaa
BOOK NOT FOUND!!
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
4
VALID INPUT     FIND A RECORD
BOOK Title              aaa
Author name             bbb
aaa     bbb     12      eee     1


-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
Required  copies ??     12
Required copies not in stock
We have = 1
1       INSERT NEW RECORD
2       DISPLAY ALL RECOED
3       DISPLAY ALL RECORD WITH POSITION
4       FIND A RECORD
5       FIND A RECORN WITH POSITION
6       QUIT

-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_
6
VALID INPUT     QUIT

Process returned 0 (0x0)   execution time : 251.780 s
Press any key to continue.
*/

