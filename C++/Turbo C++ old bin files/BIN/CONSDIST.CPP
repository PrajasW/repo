#include <iostream.h>
#include <conio.h>


class ratio
{       public:
	ratio()
	{
		cout<<"\n object is born";
	}
	void fxn()
	{
		cout<<"\n object is alive";
	}
	~ratio()
	{
		cout<<"\n object is dead";
	}
};
void main()
{       clrscr();
	ratio r;
	r.fxn();
	getch();

}
