/*
Page 418
program  14.3
Using map
*/
#include<iostream>
#include<cstdio>
#include<map>
#include<string>
using namespace std;
typedef map<string, int> phoneMap;
//class definition

//main begin
int main()
{
    string name;
    int number;

    phoneMap phone;

    cout << "Enter three sets of name and number\n";

    for(int i = 0; i < 3; i++)
    {
        cin >> name; // Get key
        cin >> number; // Get value
        phone[name] = number; // put them in map
    }

    phone ["Jacob"] = 4444; // insert Jacob

    phone.insert(pair<string, int> ("Bose", 5555));

    int n = phone.size();
    cout << "\nSize of map: " << n << "\n\n";

    cout << "List of telephone numbers \n";
    phoneMap::iterator p;
    for(p = phone.begin(); p != phone.end(); p++)
    {
        cout << (*p).first << " " << (*p).second << "\n";
    }
    cout << "\n";
    cout << "Enter name: "; // Get name
    cin >> name;
    number = phone[name]; // find number
    cout << "Number : " << number << "\n";


    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter three sets of name and number
Prasunna 1111
Singh 2222
Raja 3333

Size of map: 5

List of telephone numbers
Bose 5555
Jacob 4444
Prasunna 1111
Raja 3333
Singh 2222

Enter name: Bose
Number : 5555

Process returned 0 (0x0)   execution time : 51.572 s
Press any key to continue.
*/

