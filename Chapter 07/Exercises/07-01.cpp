/*
Page 200
programing exercises 7.1
7.1 Create a class FLOAT that contains one float data member.Overload all
four arithmetic operators so that they operate on the object

*/
#include<iostream>
#include<cstdio>
using namespace std;
class FLOAT
{
    float number;
public:
     //constructor 1
    FLOAT()
    {
        number = 0.0;
    }
    //constructor 2
    FLOAT(float number)
    {
        this->number = number;
    }
    //overloading + operator //
    FLOAT operator+(FLOAT a)
    {
         return FLOAT((number + a.number)); //implicitly invoking constructor 2
    }
    //overloading - operator //
    FLOAT operator-(FLOAT a)
    {
        return FLOAT((number - a.number));
    }
    //overloading * operator //
    FLOAT operator*(FLOAT a)
    {
        return FLOAT((number * a.number));
    }
    //overloading / operator //
    FLOAT operator/(FLOAT a)
    {
        return FLOAT((number / a.number));
    }
    //float type casting overloading
    operator float()
    {
        return(number);
    }
    //int  type casting overloading
    operator int()
    {
        return(int(number));
    }

    //using friend function

    //overloading + operator
    friend FLOAT operator+(float number, FLOAT a)
    {
        FLOAT temp = (number + a.number);
        return (temp);
    }
    //overloading + operator //
    friend FLOAT operator+(FLOAT a,float number)
    {
        return FLOAT((number + a.number));
    }

    //overloading - operator //
    friend FLOAT operator-(float number, FLOAT a)
    {
        return FLOAT((number - a.number));
    }
     friend FLOAT operator-(FLOAT a,float number)
    {
        return FLOAT((number - a.number));
    }

    //overloading * operator //
    friend FLOAT operator*(float number, FLOAT a)
    {
        return FLOAT((number * a.number));
    }

    friend  FLOAT  operator*(FLOAT a,float number)
    {
        return FLOAT((number * a.number));
    }


    //overloading / operator //
    friend FLOAT operator/(float number, FLOAT a)
    {
        return FLOAT((number / a.number));
    }
     friend FLOAT operator/(FLOAT a,float number)
    {
        return FLOAT((number / a.number));
    }



    //input a object //overloading >> operator
    friend void operator >>(istream &fin, FLOAT &a)
    {
        fin >> a.number;
    }
    //show object in screen //overloading << operator
    friend void operator <<(ostream &fout, FLOAT &a)
    {
        fout << a.number;
    }
};
//main begin
int main()
{
    FLOAT f1,f2,f3,f4,f5,f;
    //overload >> operator
    cout << "Enter float value\t"; cin >> f1;
    cout << "Enter float value\t"; cin >> f2;
    cout << "Enter float value\t"; cin >> f3;
    cout << "Enter float value\t"; cin >> f4;
    //although its looking odd ...but think like (f1.operator+f2)then (f1.operator+f3) then (f1.operator+f4)
    //at the last point f = FLOAT(FLOAT &f1) //copy constructor was called
    f = f1 + f2 + f3 + f4;

    /*
    SWEEET
    let's start
    f1+25 call friend function, into the friend function a temporary object  was created.
    and through temporary object call constructor function  (FLOAT(float number)),now temporary objects number = 36;
    now compiler  still not returning value to f5
    so (temporary+f2) call  (FLOAT operator+(FLOAT a))
    // think like temporary.operator+(f2)//thats mean temporary's value should be update
    now again (temporary + 154.25) called friend function and then return value by temp

    */
    cout << "Value of F5 is = ";
    f5 = f1 + 25 + f2 + 154.25;
    cout << f5; //overload << operator

    float a;
    a = f5; // or float(f5);
    cout << "\nOperator casting " << a << "\n";

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Enter float value       11
Enter float value       22
Enter float value       33
Enter float value       44
Value of F5 is = 212.25
Operator casting 212.25

Process returned 0 (0x0)   execution time : 3.556 s
Press any key to continue.
*/
