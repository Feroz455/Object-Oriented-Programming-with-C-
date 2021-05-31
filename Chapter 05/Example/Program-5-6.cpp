/*
Page 121
program 5.6
Array of object

*/
#include<iostream>
#include<cstdio>
using namespace std;
class employee
{
    char name[30];
    float age;
public:
    void getdata(void);
    void putdata(void);
};

void employee :: getdata(void)
{
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age \n";
    cin >> age;
}
void employee ::putdata(void)
{
    cout << "Name : " << name << "\n";
    cout << "Age : " << age << "\n";
}
const int size = 3;

//main begin
int main()
{
    employee manager[size];
    for(int i = 0; i < size; i++)
    {
        cout << "\nDetails of manager " << i + 1 << "\n";
        manager[i].getdata();
    }
    cout << "\n";

    for(int i = 0; i < size; i++)
    {
        cout << "\nManager " << i+1 << "\n";
        manager[i].putdata();
    }
    getchar();
    return 0;
}
//main end
///Program end

/*
output


Details of manager 1
Enter name: xxx
Enter age
45

Details of manager 2
Enter name: yyy
Enter age
37

Details of manager 3
Enter name: zzz
Enter age
50


Manager 1
Name : xxx
Age : 45

Manager 2
Name : yyy
Age : 37

Manager 3
Name : zzz
Age : 50

Process returned 0 (0x0)   execution time : 21.930 s
Press any key to continue.
*/

