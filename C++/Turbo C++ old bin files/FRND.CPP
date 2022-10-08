#include<iostream.h>
#include<conio.h>
class A
{
	private: int m,n;
	public :
	void setvalue( )

			{m = 5, n= 6; }
	friend void sum()
	{
		cout<< m+n;
	}
};
void main()
{
	A ab;
	ab.setvalue();
	sum();
}