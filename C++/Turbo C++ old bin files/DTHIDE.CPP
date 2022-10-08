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
		A obj;
		
		cout<< obj.m + obj.n;
	}
};
void main()
{
	A ab;
	ab.setvalue();
	sum(); /
}