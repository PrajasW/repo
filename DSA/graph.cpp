#include <iostream>
#include <cmath>
using namespace std;

class Line;
class Coordinate
{
    float x;
    float y;
public:
    Coordinate(float x=0,float y=0)
    {
        this->x = x;
        this->y = y;
    }
    void set_x(float x)
    {
        this->x = x;
    }
    void set_y(float y)
    {
        this->y = y;
    }
    void show()
    {
        cout<<"("<<x<<","<<y<<")";
    }
    bool isOnLine(Line);
    friend float distance(Coordinate,Coordinate);
    friend float areaTriangle(Coordinate,Coordinate,Coordinate);
};
class Line
{
    float m;
    float c;
public:
    Line(float m=0,float c=0)
    {
        this->m = m;
        this->c = c;
    }
    void show()
    {
        if (m == 0 && c==0)
        {
            cout<<"y = 0";
        }
        else if (m == 0 && c!=0)
        {
            cout<<"y = "<<c;
        }
        else if (m!=0 && c==0)
        {
            if (m == 1)
            {
                cout<<"y = x";
            }
            else
            {
                cout<<"y = "<<m<<"x";
            }
        }
        else
        {
            if (m == 1)
            {
                cout<<"y = x + "<<c;
            }
            else
            {
                cout<<"y = "<<m<<"x + "<<c;
            }
        }
    }
    friend bool Coordinate::isOnLine(Line);
};
bool Coordinate::isOnLine(Line l)
{
    if(this->y == l.m*this->x + l.c)
    {
        return true;
    }
    return false;
}
float distance(Coordinate point1,Coordinate point2)
{
    return sqrt(pow((point1.x - point2.x),2) + pow((point1.y - point2.y),2));
}
float areaTriangle(Coordinate point1,Coordinate point2,Coordinate point3)
{
    return 0.5*(point1.x*(point2.y - point3.y)) - (point1.y*(point2.x - point3.x)) + (point2.x*point3.y - point3.x*point2.y);
}

int main()
{
    // Coordinate a,b;
    // a = Coordinate(1,0);
    // b = Coordinate(0,1);
    // cout<<distance(a,b)<<endl;
    // Coordinate c;
    // cout<<areaTriangle(a,b,c)<<endl;

    Line l1(5,4);
    l1.show();
    cout<<endl;
    Coordinate a(0,45);
    cout<<a.isOnLine(l1);
    return 0;
}