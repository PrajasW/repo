// worked

#include <stdio.h>
#include <conio.h>

int fact(int x)
{
    if(x==0 || x==1)
    {
        return 1;
    }
    return x*fact(x-1);

}
// will return xCy
int C(int x,int y)
{
    // >>error if y>x 
    if(y>x)
    {
        return 0;
    }
    if(y==0)
    {
        return 1; 
    }
    if(y==1)
    {
        return x;
    }
    else
    {
        return (fact(x)/(fact(y)*fact(x-y))); 
    }
}


int main()
{
    int n;
    printf("Enter the height of triangle: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("%d ",C(i,j));
        }
        printf("\n");
    }
    
    printf("\n\npress any key to exit");
    
    getch();
    return 0;
}
    
/*
to make the following pattern
where n is the height

e.g.
n=5
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

*/