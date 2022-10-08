#include <iostream.h>
#include <conio.h>
//Linear Search Function
int linsrc(int a[],int x)
{
	int loc;
	for(int i=0; i<5;i++)
	{
		if(a[i]==x)
		{
			return i+1;
		}
	}
	return 0;
}
void main()
{
	clrscr();
	int loc,s,i;
	cout<<"Enter Numbers";
	int A[5];
	for(i=0; i<5;i++)
	{
		cin>>A[i];
	}
	cout<<"\n Orignal list: \n";
	for(i=0; i<5;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<"\n number to search \n";
	cin>>s;
	loc=linsrc( A , s );
	if(loc==0)
	{
		cout<<"\n Number not found";
	}
	else
	{
		cout<<"\n Number found at location: "<<loc;
	}
	getch();
}