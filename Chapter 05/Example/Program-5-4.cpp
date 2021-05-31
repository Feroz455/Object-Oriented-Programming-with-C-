/*
Page 115
program 5.4
Static class member

*/
#include<iostream>
#include<cstdio>
using namespace std;
class ITEMS
{
    static int count;
    int number;
public:
    void getdata(int a)
    {
        number = a;
        count++;
    }
    void getcount(void)
    {
        cout << "Count: ";
        cout << count << "\n";
    }
};
int ITEMS :: count;
//main begin
int main()
{
     ITEMS a,b,c; // count is initialized to zero display count
    a.getcount();
    b.getcount();
    c.getcount();

    a.getdata(100); // getting data into object a
    b.getdata(200); // getting data into object b
    c.getdata(300); // getting data into object c

    cout << "After reading data " << "\n";
    a.getcount();
    b.getcount();
    c.getcount();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/

