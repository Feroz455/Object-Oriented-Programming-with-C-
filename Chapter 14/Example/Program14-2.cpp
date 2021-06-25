/*
Page 413
program 14.2
Using list
*/
#include<iostream>
#include<cstdio>
#include<list>
#include<cstdlib> // for using rand() function
using namespace std;

//class definition
void display(list<int> &lst)
{
    list<int> :: iterator p;
    for(p = lst.begin(); p != lst.end(); ++p)
        cout << *p << " , ";
        cout << "\n\n";
}
//main begin
int main()
{
    list<int> list1; // Empty list of zero length
    list<int> list2(5); // Empty list of size 5
    for(int i = 0; i < 3; i++)
    {
        list1.push_back(rand()/100);
    }

    list<int> :: iterator p;
    for(p = list2.begin(); p != list2.end(); ++p)
        *p = rand() / 100;

        cout << "List1 \n";
        display(list1);

        cout << "List2 \n";
        display(list2);

        //Add two element at the ends of list1
        list1.push_front(100);
        list1.push_back(200);


        //Remove an element at the front of list2

        list2.pop_front();

        cout << "Now list1 \n";
        display(list1);
         cout << "Now List2 \n";
        display(list2);


        list<int> listA, listB;
        listA = list1;
        listB = list2;


        //Merging two lists (unsorted)
        list1.merge(list2);
        cout << "Merged unsorted lists \n";

        display(list1);

        //sorting and merging
        listA.sort();
        listB.sort();
        listA.merge(listB);

        cout << "Merged sorted lists \n";
        display(listA);


        //Reversing a list
        listA.reverse();
        cout << "Reversed merged list \n";
        display(listA);
    getchar();
    return 0;
}
//main end
///Program end

/*
output

List1
0 , 184 , 63 ,

List2
265 , 191 , 157 , 114 , 293 ,

Now list1
100 , 0 , 184 , 63 , 200 ,

Now List2
191 , 157 , 114 , 293 ,

Merged unsorted lists
100 , 0 , 184 , 63 , 191 , 157 , 114 , 200 , 293 ,

Merged sorted lists
0 , 63 , 100 , 114 , 157 , 184 , 191 , 200 , 293 ,

Reversed merged list
293 , 200 , 191 , 184 , 157 , 114 , 100 , 63 , 0 ,



Process returned 0 (0x0)   execution time : 2.863 s
Press any key to continue.
*/

