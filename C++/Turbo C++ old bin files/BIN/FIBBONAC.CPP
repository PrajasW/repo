#include <iostream.h>
#include <conio.h>

class Fibbonachi
{

public: void pattern()
{
	int a=0,b=1,n;
	cout<<"no. of terms required:";
	cin>>n;
	cout<<"\n 0 1 ";
	for (int i=0,x=0;i<n-2;i++)
	{
		x=a+b;
		cout<<x<<" ";
		a=b;
		b=x;
	}
}
};
void main()
{
	Fibbonachi fb;
	fb.pattern();
	getch();
	clrscr();

}