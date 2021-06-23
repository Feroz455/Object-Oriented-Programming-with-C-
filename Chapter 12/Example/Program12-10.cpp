/*
Latter version of book
Page 367
program  11.10
Using vectors
*/
#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

//class definition
void display(vector<int> &v)
{
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";
}
//main begin
int main()
{
    vector<int> v; // Create a vector of type int
    cout << "Initial size = " << v.size() << "\n";
    // putting values into the vector
    int x;
    cout << "Enter five integer values: ";
    for(int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }

    cout << "Size after adding 5 values: ";
    cout << v.size() << "\n";

    //Display the contents
    cout << "Current contents: \n";
    display(v);

    //Add one more value
    v.push_back(6.6); // float value truncated to int

    //Display size and contents

    cout << "\nSize = " << v.size() << "\n";

    cout << "Contents now : \n";

    display(v);

    //Inserting elements

    vector<int> :: iterator itr = v.begin();//iterator
    itr = itr + 3; // itr points to 4th element
    v.insert(itr , 1, 9);
    //Display the contents

    cout << "\nContents after inserting : \n";

    display(v);

    // Removing 4th and 5th elements
    v.erase(v.begin()+3, v.begin()+5); // Remove 4th and 5th element

    //Display the contents
    cout << "\nContents after deletion : \n";
    display(v);
    cout << "END\n";
    //cout
    getchar();
    return 0;
}
//main end
///Program end

/*
output

Initial size = 0
Enter five integer values: 1 2 3 4 5
Size after adding 5 values: 5
Current contents:
1 2 3 4 5

Size = 6
Contents now :
1 2 3 4 5 6

Contents after inserting :
1 2 3 9 4 5 6

Contents after deletion :
1 2 3 5 6
END

Process returned 0 (0x0)   execution time : 11.951 s
Press any key to continue.
*/

