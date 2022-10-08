#include <iostream.h>
#include <conio.h>

void main()
{
        int a[5], i, j, temp;
        cout<<"\n Enter Elements : \n\n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cin>>arr[i];
        }
		//main program
        cout<<"\n\n Sorting Array using Bubble Sort... \n";
        for(i=0; i<(5); i++)
        {
                for(j=0; j<(5-i-1); j++)
                {
                        if(arr[j]>arr[j+1])
                        {
                                temp=arr[j];
                                arr[j]=arr[j+1];
                                arr[j+1]=temp;
                        }
                }
        }
        cout<<"\n Sorted Element in Ascending Order : \n";
        for(i=0; i<5; i++)
        {
                cout<<" ";
                cout<<arr[i]<<" ";
        }
        getch();
		clrscr();
}