#include<iostream.h>
#include<conio.h>
int bsearch(int[],int);
void main()
{
int a[10],i,d,loc;
clrscr();
cout<<"enter any 10 numbers in ascending order";
for(i=0;i<10;i++)
{
cin>>a[i];
}
cout<<"enter the number to be searched";
cin>>d;
loc=bsearch(a,d);
if(loc)
cout<<"\nNumber found at location:"<<loc;
else
cout<<"\nNumber not found";
getch();
}
int bsearch(int y[],int dt)
{
int mid,lb,ub;
lb=0; ub=10-1;
while(ub>=lb)
{
mid=(ub+lb)/2;
if(y[mid]==dt)
return mid+1;
if(y[mid<dt)
lb=mid+1;
else
ub=mid-1;
}
return 0;
}