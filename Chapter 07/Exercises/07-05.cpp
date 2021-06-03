/*
Page 200
program Define two classes Polar and Rectangle to represent points in the polar and rectangle
system.Use conversion routines to convert from one system to the other

*/
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
using namespace std;
class POLAR;
class Rectangle
{
    float x;
    float y;
public:
    Rectangle()
    {
        x = 0;
        y = 0;
    }
    Rectangle(float x , float y)
    {
        this->x = x;
        this->y = y;
    }

/****************************************/
//setting class value
    void setX(float x)
    {
        this->x = x;
    }
    void setY(float y)
    {
        this->y = y;
    }
    float getX()
    {
        return x;
    }
    float getY()
    {
        return y;
    }
/***************************************/


    friend void operator<<(ostream &out, Rectangle r)
    {
        out << " x = " << r.x << "\ty = " << r.y << endl;
    }
    friend POLAR convert(Rectangle r);

};
class POLAR
{
    float radius;
    float angle;
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
    }

/**************************************/
//setting class value
    float getRadius()
    {
        return radius;
    }
    float getAngle()
    {
        return angle;
    }
    void setRadius(float radius)
    {
        this->radius = radius;
    }
    void setAngle(float angle)
    {
        this->angle = angle;
    }
/*****************************************/


    friend void operator <<(ostream &pout, POLAR &p)
    {
        pout<< "Radius = " << p.radius  << "\tAngle = " << p.angle <<endl;
    }
     friend Rectangle convert(POLAR p);
};
//converting rectangle to polar
POLAR convert(Rectangle r)
{
        POLAR p;
        float temp;
        temp  = sqrt(r.getX()*r.getX()+r.getY()*r.getY());
        p.setRadius(temp);

        temp = atan(r.getY()/r.getX());
        p.setAngle(temp);
        return p;
}
//converting polar to rectangle
Rectangle convert(POLAR p)
{
        Rectangle R;
        float temp;
        temp = (p.getRadius()*cos(p.getAngle()));
        R.setX(temp);
        temp = (p.getRadius()*sin(p.getAngle()));
        R.setY(temp);
        return R;
}
//main begin
int main()
{
    POLAR p(3,40),p2;
    Rectangle r(3,3), r2;
    p2 = convert(r);
    r2 = convert(p);
    cout << " r(3,3) = "; cout << p2;
    cout << "p(3,40) = "; cout << r2;
    getchar();
    return 0;
}
//main end
///Program end

/*
output
 r(3,3) = Radius = 4.24264      Angle = 0.785398
p(3,40) =  x = -2.00081 y = 2.23534

*/

