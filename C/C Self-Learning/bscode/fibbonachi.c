
// this is without reccursion
// #include <stdio.h>

// int main()
// {
//     int a=0,b=1,n,c;
//     printf("Enter value of n:");
//     scanf("%d",&n);
//     printf("\n%d %d",a,b);
//     for (int i = 0; i < n-2; i++)
//     {
//         c = a+b;
//         printf(" %d",c);
//         a=b;
//         b=c;
//     }
    
//     return 0;
// }

#include <stdio.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return (num*factorial(num-1));
    }
    return 0;
}
int main()
{
    printf("Enter Number to find Factorial of: ");
    int userValue;
    scanf("%d",&userValue);
    printf("Factorial of %d is: %d",userValue,factorial(userValue));
    return 0;
}
