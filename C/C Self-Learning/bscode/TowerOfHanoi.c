#include <stdio.h>

int hanoi(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return (2*hanoi(n-1)+1);
}

int main()
{
    printf("Enter the value of n:");
    int n;
    scanf("%d",&n);
    printf("\nThe number of steps required to tranfer %d blocks is %d",n,hanoi(n));
    return 0;
}
