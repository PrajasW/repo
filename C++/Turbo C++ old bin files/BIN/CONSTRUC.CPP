#include <iostream.h>
#include <conio.h>

class A1
{
	public:
	A1()
	{
		cout<<"constructor is born \n";
	}
	void lala()
	{
		cout<<"object is ALIVE \n";
	}
};
void main()
{       getch();
	A1 a;
	a.lala();
	getch();
	clrscr();
};