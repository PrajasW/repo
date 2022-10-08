#include <iostream.h>
#include <conio.h>

void main()
{
	clrscr();
	int i,j,A[3][3],B[3][3];
	cout<<"Enter Matrix A: \n";
	for (i=0 ; i<3; i++ )
	{
		for (j=0 ; j<3 ;j++ )
		{
			cin>>A[i][j];
		}
	}
	cout<<"\n Enter Matrix B: \n";
	for (i=0 ; i<3; i++ )
	{
		for (j=0 ; j<3 ; j++ )
		{
			cin>>B[i][j];
		}
	}
	cout<<"\n Addition of the two matrices is: \n";
	for (i=0 ; i<3 ; i++ )
	{
		for (j=0 ; j<3 ;j++ )
		{
			cout<<A[i][j]+B[i][j];
			cout<<"\t";
		}
		cout<<"\n";
	}
	getch();
}