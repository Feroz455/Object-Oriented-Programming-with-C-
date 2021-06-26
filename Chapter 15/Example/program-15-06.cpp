/*
page 438
MANIPULATING STRING
program 15-06
Comparing and Swapping Strings
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s1("Road");
    string s2("Read");
    string s3("Red");
   //Getting input line of text

   // getline(cin,s1);
    cout << "s1 = " << s1 << "\n";
    cout << "s2 = " << s2 << "\n";
    cout << "s3 = " << s3 << "\n";


    int x = s1.compare(s2);

    if(x == 0)
        cout << "s1 == s2 " << "\n";
    else if(x > 0)
        cout << "s1 > s2" << "\n";
    else
        cout << "s1 < s2 " << "\n";

    int a = s1.compare(0,2,s2,0,2);
    int b = s2.compare(0,2,s1,0,2);
    int c = s2.compare(0,2,s3,0,2);
    int d = s2.compare(s2.size()-1, 1, s3, s3.size()-1, 1);

    cout << "a = " << a << "\n" << "b = "  << b << "\n";
    cout << "c = " << c << "\n" << "d = " << d << "\n";


    cout << "\nBefore swap: \n";
    cout << "s1 = " << s1 << "\n";
    cout << "s2 = " << s2 << "\n";

    s1.swap(s2);

    cout << "\nAfter swap: \n";
    cout << "s1 = " << s1 << "\n";
    cout << "s2 = " << s2 << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
*/
