/*
Page 143
program 5.5
Create two classes DM and DB which store the value of distance.DM stores
distances in meters and centimeters and DB in feet and inches.Write a program
that can read values for the class object and data one object of DM with another
object of DB

Use a friend function to carry out the addition operation.The object that stores
the results may be a DM object for DB object or DB object,depending on the results are required.

The display should be in the format of feet and inches or meters and centimeters depending on the
display
1 meter = 3.28084
1 feet = 0.3048
1 inches = 0.0833 feet
*/
#include<iostream>
#include<cstdio>
using namespace std;
class DM;
/*********************************************/
class DB
{
    int feet;
    float inches;
public:
    void setlen(void);
    void addlen(int feet = 0, float inches = 0);
    int getFeet(void)
    {
        return feet;
    };
    float getInches(void)
    {
        return inches;
    };
    friend void result(DM);
};
void DB::setlen(void)
{
    cout << "Enter feet" << "\t";
    cin >> feet;
    cout << "Enter inches " << "\t";
    cin >> inches;
}
void DB::addlen(int feet, float inches)
{
    this->feet += feet;
    if(inches > 12)
    {
        this->feet++;
        this->inches -= inches;
    }
}
/*************************************************/
class DM
{
    int meter;
    float centimeter;
public:
    void setlen(void);
    void addlen(int meter = 0, float centimeter = 0);
    int getMeter(void)
    {
        return meter;
    };
    float getCentimeter(void)
    {
        return centimeter;
    };
    friend void result(DB);
};
void DM::setlen(void)
{
    cout << "Enter meter\n";
    cin >> meter;
    cout << "Enter centimeter\n";
    cin >> centimeter;
}
void DM::addlen(int meter, float centimeter)
{
    this->meter += meter;
    if(centimeter>100)
    {
        this->meter++;
        this->centimeter -= centimeter;
    }
}
/************************************************/
 void result(DM d)
 {
     float Cent = 100;
     float centimeter = (d.getCentimeter())/Cent;
     float meter = float(d.getMeter())+ centimeter;
     float value = meter * 3.28084;
     int temp = value ;
     float fvalue = (value - temp)*0.0833 ;
     cout << d.getMeter() << "m  " << (d.getCentimeter())<< "c   " << "  =  " << temp << "Feet  "  << fvalue<< "inches "<< endl;

 };
 void result(DB d)
 {
     //1 inches = 0.0833 feet
     //1 meter = 3.28084 f
     //1 feet = 0.3048 m
     float Fvalue = d.getFeet()+(d.getInches()*0.0833) ;
     float Mvalue = Fvalue * 0.3048;
     cout <<d.getFeet() << "Feet   " << d.getInches() << "inches =  " << Mvalue << "Meter  " << endl;

 };

/*************************************************/
//main begin
int main()
{
    DB F;
    DM M;

    F.setlen();
    M.setlen();

    result(F);
    result(M);
    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter feet      12
Enter inches    10
Enter meter
85
Enter centimeter
32
12Feet 10   inches =  3.9115   Meter
85   m  32   c    =   279  Feet  0.0767413  inches

Process returned 0 (0x0)   execution time : 7.916 s
Press any key to continue.

*/


