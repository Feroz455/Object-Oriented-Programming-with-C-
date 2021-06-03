/*
Page 200
program 7.2
Design a class POLAR which describes a point
int the plane using polar coordinates radius and
angle.A point in polar coordinates is shown in fig 7.3
Use the overloaded + operator to add two objects of Polar
NOTE: that we can not add polar values of two points directly .
This requires first the conversion of points into rectangular co-
ordinates, then adding the corresponding rectangular co-ordinates
and finally converting the result block into polar coordinates  .
You need to use the following trigonometric formula
x = r * cos(a);
y = r * sin(a);
a = atan(y/x) // arc tangent
r = sqrt(x*x + y*Y);

*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
class POLAR
{
    float radius;
    float angle;
    float x;
    float y;

public:
    POLAR()
    {
        radius = 0.0;
        angle = 0.0;
    }
    POLAR(float radius, float angle)
    {
        this->radius = radius;
        this->angle = angle;
        x = radius*cos(angle);
        y = radius*sin(angle);
    }
    POLAR(POLAR &p)
    {
        this->x = x;
        this->y = y;
        this->radius = radius;
        this->angle = angle;
    }
    POLAR operator+(POLAR object)
    {
        POLAR temp;
        temp.x = x+object.x;
        temp.y = y+object.y;
        temp.radius = sqrt(x*x + y*y);
        temp.angle = atan(y/x);
        return temp;
    }
    friend void operator <<(ostream &pout, POLAR &p)
    {
        pout<< "Radius = " << p.radius  << "\nAngle = " << p.angle <<endl;
    }


};
//main begin
int main()
{
    POLAR p1(3.0,30.0), p2(4.0,40.0),p3;

    p3 = p1+p2;

    cout << "P3 = \t:\n"; cout << p3;
    cout << "P2 = \t:\n"; cout << p1;
    cout << "P1 = \t:\n"; cout << p2;

    getchar();
    return 0;
}
//main end
///Program end

/*
output
P3 =    :
Radius = 3
Angle = -1.41593
P2 =    :
Radius = 3
Angle = 30
P1 =    :
Radius = 4
Angle = 40


Process returned 0 (0x0)   execution time : 1.469 s
Press any key to continue.
*/

