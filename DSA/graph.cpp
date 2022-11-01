#include <iostream>
#include <cmath>
using namespace std;

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
    friend float distance(Coordinate,Coordinate);
    friend float areaTriangle(Coordinate,Coordinate,Coordinate);
};
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
    Coordinate a,b;
    a = Coordinate(1,0);
    b = Coordinate(0,1);
    cout<<distance(a,b)<<endl;
    Coordinate c;
    cout<<areaTriangle(a,b,c)<<endl;
    return 0;
}