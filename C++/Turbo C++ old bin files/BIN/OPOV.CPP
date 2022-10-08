#include <conio.h>
#include <iostream.h>

class x
{
	public :
		void operator * (int a,int b)
	{
		cout<<"Area:"<<a*b;
		return 0;
	}
};
void main()
{
	x o;
	int a,b;
	cin>>a>>b;
	*(a,b);
	getch();
	clrscr();
}

