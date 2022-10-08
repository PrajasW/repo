#include <conio.h>
#include <iostream.h>

class Burger
{
	public:
	int n;
	Burger()
	{
		cout<<"Welcome to WacRonalds what would you like to order";
		cout<<"\n Burger (1) or Fries (2) or Drink (3)";
		cin>>n;
	}
	void bill()
	{
		if(n==1)
		{
		cout<<"\n Burger";
		}
		if(n==2)
		{
		cout<<"\n Fries";
		}
		if(n==3)
		{
		cout<<"\n Sir This is WacR";
		}
	}
};
void main()
{
	clrscr();
	Burger brg;
	brg.bill();
	getch();
};