/*
page 390
Exception Handling
program 13-5
Class type as an Exception
*/
#include<iostream>
#include<cstring>
using namespace std;
class Error
{
    int err_code;
    char *err_desc;
public:
    Error()
    {

    }
    Error(int c, char *d)
    {
        err_code = c;
        err_desc = new char[strlen(d)];
        strcpy(err_desc, d);
    }
    void err_display(void)
    {
        cout << "\nError code: " << err_code << " \n"
             << "Error Description: " << err_desc;
    }
};
//main begin
int main()
{

    try
    {
        cout << "Press any key to throw a test Exception.\n";
         getchar();
        throw Error(); //Calling constructor before creating class object
    }
    catch(Error e)
    {
        cout << "\nException Caught successfully\n";
        //e.err_display();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Press any key to throw a test Exception.
4

Exception Caught successfully
.
Error code: 99
Error Description: Test Exception
Process returned 0 (0x0)   execution time : 3.395 s
Press any key to continue.
*/
