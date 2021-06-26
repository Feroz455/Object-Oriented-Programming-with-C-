/*
page 432
MANIPULATING STRING
program 15.2
Modifying String Object
*/
#include<iostream>
#include<string>
using namespace std;

//main begin
int main()
{
    string s1("12345");
    string s2("abcde");

    cout << "Original Strings are: \n";

    cout << "s1 : " << s1 << "\n";
    cout << "s2 : " << s2 << "\n";

    //Inserting a string into another
    cout << "Place s2 inside s1 \n";
    s1.insert(4,s2);
    cout << "Modified s1: " << s1 << "\n\n";

    //removing character in a string
    cout << "Remove 5 character from s1\n";
    s1.erase(4,5);
    cout << "Now s1: " << s1 << "\n\n";

    //replacing character in a string
    cout << "Replace middle 3 character in s2 with s1\n";
    s2.replace(1,3,s1);

    cout << "Now s2 : " << s2 << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Original Strings are:
s1 : 12345
s2 : abcde
Place s2 inside s1
Modified s1: 1234abcde5

Remove 5 character from s1
Now s1: 12345

Replace middle 3 character in s2 with s1
Now s2 : a12345e

*/
