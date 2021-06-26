/*
page
New Features of ANSI
program 16

*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    wchar_t w = L'A';
    cout << "Wide character value :: " << w << endl;
    cout << "Size of the wide char is:: " << sizeof(w) << endl;
    //char type array string
    char cname[] = "Bangladesh";
    cout << cname << endl;

    //wide char type array string

    wchar_t waname[] = L"Bangladesh";
    wcout << waname  << L"' is " << wcslen(waname) << endl;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Wide character value :: 65
Size of the wide char is:: 2

Process returned 0 (0x0)   execution time : 1.391 s
Press any key to continue.
*/
