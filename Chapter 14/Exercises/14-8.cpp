/*

Page  427
program 14.8
Write  program that accepts a shopping list of five items from the keyboard and stores them
in a vector. Extend the program to accomplish the following
a) To delete a specified item in the list
b) To add an item at a specified location
c) To add an item at the end
d) To print the contents of the vector

*/
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;

//class definition

//main begin
int main()
{
    vector<string> v;
    vector<string>::iterator vi;
    string LS;
    cout << "Enter shopping list\n";
   for(int i = 0; i < 5; i ++)
   {
    cin >> LS;
    v.push_back(LS);
   }

   cout << "Enter which item you want to delete\n";
   cin >> LS;
   vi = remove(v.begin(), v.end(), LS);


   cout << "\nHere is your list\n";
    for(string n: v)
        cout << n << endl;

   cout << "Enter a new item to add\n";
   cin >> LS;
   vi = v.insert(v.begin()+2,LS);

   cout << "\nHere is your list\n";
    for(string n: v)
        cout << n << endl;


    getchar();
    return 0;
}
//main end
///Program end

/*
output

Enter shopping list
Milk
chips
cake
Ice_cream
chocolate
Enter which item you want to delete
cake

Here is your list
Milk
chips
Ice_cream
chocolate

Enter a new item to add
Red_velvet_Cake

Here is your list
Milk
chips
Red_velvet_Cake
Ice_cream
chocolate


Process returned 0 (0x0)   execution time : 68.856 s
Press any key to continue.
*/

