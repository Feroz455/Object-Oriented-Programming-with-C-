/*
Page 110
program 5.3
Processing Shopping List

*/
#include<iostream>
#include<cstdio>
using namespace std;
const int  m = 50;
class ITEMS
{
    int itemCode[m];
    float itemPrice[m];
    int count;
public:
    void CNT(void) {count = 0;}; // Initializes count to 0
    void getitem(void);
    void displaySum(void);
    void remove(void);
    void displayItems(void);
};
//==========================================//
void ITEMS::getitem(void) // assign values to data member of item
{
    cout << "Enter item code: ";
    cin >>itemCode[count];
    cout << "Enter item cost :";
    cin >> itemPrice[count];
    count++;
}
void ITEMS::displaySum(void)
{
    float sum = 0;
    for(int i = 0; i < count; i++)
    {
        sum = sum + itemPrice[i];
    }
    cout << "\nTotal value : " << sum << "\n";
}
void ITEMS :: remove(void) // delete a specified item
{
    int a;
    cout << "Enter item code : ";
    cin >> a;
    for(int i = 0; i < count; i++)
    {
        if(itemCode[i] == a)
        {
            itemPrice[i] = 0;
        }
    }
}
void ITEMS ::displayItems(void) // displaying items
{
    cout << "\nCode Price\n";
    for(int i = 0; i < count ; i++)
     {
         cout << "\n" << itemCode[i];
         cout<< "  " << itemPrice[i];
     }
     cout << "\n";
}
//main begin
int main()
{
    ITEMS order;
    order.CNT();
    int x;
    do //do ...while loop
    {
        cout << "\nYou can do the following\n";
        cout << "Enter appropriate number\n";

        cout << "\n1 : Add an item";
        cout << "\n2 : Display total value";
        cout << "\n3 : Delete an item";
        cout << "\n4 : Display all items";
        cout << "\n5 : Quit";
        cout << "\n\nWhat is your option?\n";

        cin >> x;
        switch(x)
        {
        case 1:
            order.getitem();
            break;
        case 2:
            order.displaySum();
        case 3:
            order.remove();
            break;
        case 4:
            order.displayItems();
            break;
        case 5:
            break;
        default:
            cout << "Error in input: try again\n";
        }

    }while(x != 5); // do ... while ends

    getchar();
    return 0;
}
//main end
///Program end

/*
output

You can do the following
Enter appropriate number

1 : Add an item
2 : Display total value
3 : Delete an item
4 : Display all items
5 : Quit

What is your option?
1
Enter item code: 111
Enter item cost :100

You can do the following
Enter appropriate number

1 : Add an item
2 : Display total value
3 : Delete an item
4 : Display all items
5 : Quit

What is your option?
1
Enter item code: 222
Enter item cost :200

You can do the following
Enter appropriate number

1 : Add an item
2 : Display total value
3 : Delete an item
4 : Display all items
5 : Quit

What is your option?
1
Enter item code: 333
Enter item cost :300

You can do the following
Enter appropriate number

1 : Add an item
2 : Display total value
3 : Delete an item
4 : Display all items
5 : Quit

What is your option?
4

Code Price

111  100
222  200
333  300

You can do the following
Enter appropriate number

1 : Add an item
2 : Display total value
3 : Delete an item
4 : Display all items
5 : Quit

What is your option?
3
Enter item code : 222

You can do the following
Enter appropriate number

1 : Add an item
2 : Display total value
3 : Delete an item
4 : Display all items
5 : Quit

What is your option?
4

Code Price

111  100
222  0
333  300

You can do the following
Enter appropriate number

1 : Add an item
2 : Display total value
3 : Delete an item
4 : Display all items
5 : Quit

What is your option?
5

Process returned 0 (0x0)   execution time : 29.114 s
Press any key to continue.
*/

