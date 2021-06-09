/*
Page 289
program 9.1
Create a base class called shape.Use this class to store two double type values
that could be used to compute the area of figure.Derive two specific classes called
triangle and rectangle from the base shape.Add to the base class a member
function get_data() to initialize base class data members and another member
function display_area() to compute and display the area of figures.Make
display_are() as a virtual function and redefine this function in the derived classes
to suit their requirements.

using these three classes, design a program that will accept dimensions of a triangle
or a rectangle interactively, and display the are

Remember the two values given as input will be teated as lengths of two sides in
the case of rectangles, and as base and height in the case of triangles and used
as follows

area of rectangle = x * y
area of triangle = 1/2 * x *y;

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
    void get_data(double x, double y)
    {
        this->x = x;
        this->y = y;
    }
    virtual void display_area()
    {

    }
};
class Triangle: public shape
{
public:

    void display_area()
    {
        cout << "Area of triangle = " << "1/2 * " << x << " * " << y << "=" << (x * y)/2 << endl;
    }
};
class Rectangle: public shape
{
  public:

      void display_area()
      {
        cout << "Area of rectangle = " << x << " * " << y << "=" << x * y << endl;
      }
};

//main begin
int main()
{
    shape *sptr;
    Rectangle R;
    Triangle T;
    R.get_data(12.5,25.4);
    T.get_data(12.5, 25.4);

    sptr = &R;
    sptr->display_area();
    sptr = &T;
    sptr->display_area();

    getchar();
    return 0;
}
//main end
///Program end

/*
output
Area of rectangle = 12.5 * 25.4=317.5
Area of triangle = 1/2 * 12.5 * 25.4=158.75


Process returned 0 (0x0)   execution time : 4.362 s
Press any key to continue.


*/

