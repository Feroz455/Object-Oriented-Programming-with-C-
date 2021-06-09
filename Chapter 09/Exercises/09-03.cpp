/*
Page 289
program 9.3
Run the above program with following modifications

a) Remove the definition of display_area() from one of the derived classes
b) In addition to the above change declare the display_area() as virtual in base class shap

Comment on the output in each case.

*/
#include<iostream>
#include<cstdio>
using namespace std;
//class definition
class shape
{
protected:

    double x;
    double y;
public:
    shape()
    {
        x = 0.0;
        y = 0.0;
    }
    shape(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    void get_data(double x = 0, double y = 0)
    {
        this->x = x;
        this->y = y;
    }
    virtual void display_area()
    {
        cout << "From Base class \n";
    }
};
class Triangle: public shape
{
public:

   /* void display_area()
    {
        cout << "Area of triangle = " << "1/2 * " << x << " * " << y << "=" << (x * y)/2 << endl;
    }*/
};
class Rectangle: public shape
{
  public:

      void display_area()
      {
        cout << "Area of rectangle = " << x << " * " << y << "=" << x * y << endl;
      }
};
class Circle: public shape
{
public:
    void display_area()
    {
        cout << "Area of circle is = " << "3.416 " << " * " << x << " * " << x << " = " << 3.1416*x*x << endl;
    }
};
//main begin
int main()
{
    shape *sptr;
    Rectangle R;
    Triangle T;
    Circle C;
    R.get_data(12.5,25.4);
    T.get_data(12.5, 25.4);
    C.get_data(9);


    sptr = &R;
    sptr->display_area();
    sptr = &T;
    sptr->display_area();
    sptr = &C;
    sptr->display_area();
    getchar();
    return 0;
}
//main end
///Program end
/*
update
Area of rectangle = 12.5 * 25.4=317.5
Area of triangle = 1/2 * 12.5 * 25.4=158.75
From Base class

Process returned 0 (0x0)   execution time : 1.219 s
Press any key to continue.
From Base class
Area of triangle = 1/2 * 12.5 * 25.4=158.75
Area of circle is = 3.416  * 9 * 9 = 254.47


Process returned 0 (0x0)   execution time : 2.656 s
Press any key to continue.

Area of rectangle = 12.5 * 25.4=317.5
From Base class
Area of circle is = 3.416  * 9 * 9 = 254.47


Process returned 0 (0x0)   execution time : 1.141 s
Press any key to continue.

*/
