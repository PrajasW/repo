#include <iostream.h>
#include <conio.h>

swap(int &x, int &y)
{
	int temp;
	temp = x;
	x=y;
	y=temp;
}

void main()
{
	clrscr();
	int a,b;
	cout<<"Two Numbers:";
	cin>>a>>b;
	cout<<"\n Orignal values "<<a" and "<<b;
	swap(a,b);
	cout<<"\n After Swapping "<<a" and "<<b;
	getch();
}