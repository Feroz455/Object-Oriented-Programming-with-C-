/*
Page 158
program 6.05
CONSTRCTORS WITH new

*/
#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class String
{
    char *name;
    int length;
public:
    String()    // constructor - 1
    {
        length = 0;
        name = new char[length + 1];
    }
    String(char *s) //constructor - 2
    {
        length = strlen(s);

        name = new char[length+1]; // one additional character for '\0'
        strcpy(name,s);
    }
    void display(void)
    {
        cout << name << "\n";
    }
    void join(String &a, String &b);

};

void String :: join(String &a, String &b)
{
    length = a.length + b.length;
    cout << length << "\n";
    delete name;
    name = new char[length + 1]; // dynamic allocation
    strcpy(name, a.name);
    strcat(name, b.name);
};
//main begin
int main()
{
    char *first = "Firoz ";
    String name1(first), name2("Louis "), name3("Laggatta ") , s1, s2;

    s1.join(name1, name2);
    s2.join(s1, name3);
    name1.display();
    name2.display();
    name3.display();

    s1.display();
    s2.display();



    getchar();
    return 0;
}
//main end
///Program end

/*
output
12
21
Firoz
Louis
Laggatta
Firoz Louis
Firoz Louis Laggatta

Process returned 0 (0x0)   execution time : 0.719 s
Press any key to continue.
*/

