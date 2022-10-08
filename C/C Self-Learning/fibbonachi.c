// lesson to learn --> Recursion is less code at cost of more run time by creating redundent function calls


#include <stdio.h>
#include <conio.h>

void fibItterative(int n)
{
    int c;
    int a=1,b=1;
    for (int i = 0; i < n-2; i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    printf("\nThe %d th term is: %d",n,b);

}
int fibReccursive(int n)
{
    if (n==1)
    {
        return 1;
    }
    if (n==2)
    {   
        return 1;
    }
    
    return fibReccursive(n-1)+fibReccursive(n-2);
}

int main()
{   
    int num;
    printf("Enter which many terms of series do you want: ");
    scanf("%d",&num);
    if (num<1)
    {
        printf("There is no series with 0 or -ve no. of terms bruv");
    }
    fibItterative(num);

    printf("\nThe %d th term is: %d",num,fibReccursive(num));

    

    printf("\nPress any key to exit");
    getch();
    return 0;
}