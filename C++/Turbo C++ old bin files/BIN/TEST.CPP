#include <conio.h>
#include <iostream.h>

class circle
{
	public:
	float r;
	float pi=3.14; //doubt why can't I initialize pi outside the functioxn
	circle()
	{
		cout<<"Enter Radius:";
		cin>>r;
	}
	void area()
	{
		float a=pi*r*r;
		cout<<"Area:"<<a;
	}
};
void main()
{
	circle c;
	c.area();
	getch();
	clrscr();
}