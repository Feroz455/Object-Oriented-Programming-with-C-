/*
Page 321
program 10.03
Write a program which a text from the keyboard and display the following information
on the screen in two columns

a) Number of lines
b) Number of Words
c) Number of characters

String should be left-Justified and number should be right-Justified in a suitable field
width;

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition

//main begin
int main()
{
    char str[5][20], c;
    int i,j = 0;
    int word[5];
    int line = 0 , character[5];
    for(i = 0; i  < 5; i++)
    {
        word[i] = 1;
        character[i] = 0;
    }

   for(i = 0 ; i<5; i++)
    {
        cin.get(c);
        while(c != '\n')
        {
            str[i][character[i]] = c;
            cout.put(str[i][character[i]]);
            character[i]++;
            if(c == ' ')
            {
                word[i]++;
            }
            cin.get(c);
        }
        line++;
        str[i][character[i]] = '\0';
        cout << "\n";

    }
    cout.width(10);
    cout.setf(ios::left, ios::adjustfield);
    cout << "Text";
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout << "Character";
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout << "Word";
    cout << "\n\n";

    for(i = 0; i < 5 ; i++)
    {
    cout.width(10);
    cout.setf(ios::left, ios::adjustfield);
    cout.write(str[i],10);
    cout.setf(ios::fixed, ios::adjustfield);
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout << character[i];
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout << word[i];
    cout << "\n";
    }
    cout << "\n\n";
    cout.fill('=');
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout<< "line";
    cout.width(10);
    cout.setf(ios::right, ios::adjustfield);
    cout<< line;


    getchar();
    return 0;
}
//main end
///Program end

/*
output
C Programming
C Programming
C Primer
C Primer
Turbo C++
Turbo C++
JAVA SE
JAVA SE
JAVA SCRIPT
JAVA SCRIPT
Text       Character      Word

C Programm        13         2
C Primer           8         2
Turbo C++          9         2
JAVA SE            7         2
JAVA SCRIP        11         2


======line=========5
*/

