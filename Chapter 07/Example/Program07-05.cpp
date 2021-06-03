/*
Page 193
program Data conversions

*/
#include<iostream>
#include<cstdio>
using namespace std;

class invent2; // destination class declared
class invent1 // source class
{
    int code; // item code
    int items; // no of items
    float price; // cost of each item
public:
    invent1(int a, int b, float c)
    {
        code = a;
        items = b;
        price = c;
    }
    void putdata()
    {
    cout << "Code : " << code << "\n";
    cout << "Items : " << items << "\n";
    cout << "Value : " << price << "\n";
    }
    int getcode()
    {
        return code;
    }
    int getitems()
    {
        return items;
    }
    float getprice()
    {
        return price;
    }
    //can i call this is overloading ??? its good to say casting
    operator float() //Look carefully there is no return type but this function returning a value
    {
        return(items*price);
    }
    /* operator invent2()  // invent1 to invent2
    {
        invent2 temp;
        temp.code = code;
        temp.value = price * items ;
        return temp;
    }*/
};

class invent2
{
    int code;
    float value;
public:
    invent2()
    {
        code = 0;
        value = 0;
    }
    invent2(int x, float y) // constructor for initialization
    {
        code = x;
        value = y;
    }
    void putdata()
    {
        cout << "Code: " << code << "\n";
        cout << "Value: " << value << "\n\n";
    }
    invent2(invent1 p)
    {
        code = p.getcode();
        value = p.getitems() * p.getprice();
    }
}; // END of destination class

//main begin
int main()
{
    invent1 s1(100, 5, 140.0);
    invent2 d1;
    float total_value;
    /* invent1 to float */
    total_value =float(s1);
    //total_value = s1; // implicit casting ...like normal casting as usual ..
    /*invent1 to invent2  */
    d1 = s1;

    cout << "Product details - invent1 type " << endl;
    s1.putdata();
    cout << "\nStock value " << "\n";
    cout << "Value  = " << total_value << "\n\n";
    cout << "Product details - invent2 type " << "\n";
    d1.putdata();
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Product details - invent1 type
Code : 100
Items : 5
Value : 140

Stock value
Value  = 700

Product details - invent2 type
Code: 100
Value: 700



Process returned 0 (0x0)   execution time : 17.529 s
Press any key to continue.
*/
