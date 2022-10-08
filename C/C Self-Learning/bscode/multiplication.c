#include <stdio.h>

/*
print multiplication table of a number entered by user
*/
int main()
{
    int a;
    printf("Enter the Number:");
    scanf("%d",&a);
    for(int i=1;i<=10;i++)
    {
        printf("\n %d x %d = %d",a,i,a*i);
    }
    return 0;
}
