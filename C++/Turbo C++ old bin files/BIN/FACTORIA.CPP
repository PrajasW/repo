 #include <iostream.h>
 #include <conio.h>

 void main()
 {
	int a,f=1;
	cout<<"factorial of which number?" ;
	cin>>a;
	for( int i=1; i<=a ; i++)
	{
	  f=i*f;
	}
	cout<<"factorial is: "<<f;
	getch();
	clrscr();
 }
