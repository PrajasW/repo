#include <conio.h>
#include <iostream.h>

void main()

{
	cout<<"which number to find GCD of: ";
	int x,y;
	cin>>x>>y;
	int gcd;
	for(int i=1;i<x;i++)
	{
		if(x%i==0 && y%i==0)
		{
			gcd=i;
		}
	}
	cout<<"\n GCD: "<<gcd;
	getch();
	clrscr();



}