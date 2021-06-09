/*
Page 267
program 9.8
pointer to objects

*/
#include<iostream>
#include<cstdio>
using namespace std;

//class definition
class item
{
    int code;
    float price;
public:
    void getdata(int a, float b)
    {
        code = a;
        price = b;
    }
    void show(void)
    {
        cout << "Code : " << code << "\n";
        cout << "Proce: " << price << "\n";
    }
};
const int size = 2;
//main begin
int main()
{
    item *p = new item[size];
    item *d = p;
    int x, i;
    float y;
    for(i = 0; i < size; i++)
    {
        cout << "Input code and price for item " << i+1;
        cin >> x >> y;
        p->getdata(x,y);
        p++;
    }
    for(i = 0; i < size; i++)
    {
        cout << "Item : " << i+1 << "\n";
        d->show();
        d++;
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Input code and price for item 1 40 500
Input code and price for item 2 50 600
Item : 1
Code : 40
Proce: 500
Item : 2
Code : 50
Proce: 600

Process returned 0 (0x0)   execution time : 20.327 s
Press any key to continue.

*/

