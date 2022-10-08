#include <iostream.h>
#include <conio.h>

void main()

{
	//basic initialization of variables here 'a' is an array
	int a[10],i,j,temp;
	cout<<"Enter Number's to be Sorted: \n";
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"Orignal Sequence is:";
	for(i=0;i<10;i++)
	{
		cout<<a[i];
	}
	//main program
	for(i=0;i<10;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Bubble Sort in asscending order is: \n";
	for(i=0;i<10;i++)
	{
		cout<<a[i];
	}
	getch();
	clrscr();
}
