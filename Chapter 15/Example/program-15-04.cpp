/*
page 435
MANIPULATING STRING
program 15
Obtaining String Characteristics
*/
#include<iostream>
#include<string>
using namespace std;

void display(string &str)
{
    cout << "Size = " << str.size() << "\n";
    cout << "Length = " << str.length() << "\n";
    cout << "Capacity = " << str.capacity() << "\n";
    cout << "Maximum Size = " << str.max_size() << "\n";
    cout << "Empty : " << (str.empty()? "yes":"NO");
    cout << "\n\n";
}
//main begin
int main()
{
    string str1;
    cout << "Initial status: \n";
    display(str1);

    cout << "Enter a string (one word) \n";
    cin >> str1;

    cout << "Status now: \n";
    display(str1);

    str1.resize(15);

    cout << "Status after resizing: \n";
    display(str1);
    cout << "\n";
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Initial status:
Size = 0
Length = 0
Capacity = 15
Maximum Size = 9223372036854775807
Empty : yes

Enter a string (one word)


Bangladesh
Status now:
Size = 10
Length = 10
Capacity = 15
Maximum Size = 9223372036854775807
Empty : NO

Status after resizing:
Size = 15
Length = 15
Capacity = 15
Maximum Size = 9223372036854775807
Empty : NO



Process returned 0 (0x0)   execution time : 9.407 s
Press any key to continue.

*/
