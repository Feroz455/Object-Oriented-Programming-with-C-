/*
page 437
MANIPULATING STRING
program 15-5
Accessing And Manipulating Characters
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s("ONE TWO THEE FOUR");
    cout << "The string contains: \n";
    for(int i = 0; i < s.length(); i++)
    {
        cout << s.at(i); //Display one character
    }
    cout << "\nString is shown again: \n";
    for(int j = 0; j < s.length(); j++)
    {
        cout << s[j];
    }
    int x1 = s.find("TWO");
    cout << "\n\nTWO is found at : " << x1 << "\n";

    int x2 = s.find_first_of('T');
    cout << "\nT is found first at: " << x2 << "\n";
    int x3 = s.find_last_of('R');
    cout << "\nR is last found at: "<< x3 << "\n";

    cout << "\nRetrieve and print substring TWO\n";

    cout << s.substr(x1,3);
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

The string contains:
ONE TWO THEE FOUR
String is shown again:
ONE TWO THEE FOUR

TWO is found at : 4

T is found first at: 4

R is last found at: 16

Retrieve and print substring TWO
TWO

*/
