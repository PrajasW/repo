// WORKED


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
    
/*
to make the following pattern
where n is the height

e.g.
n=4
      *  
    * * * 
  * * * * *
* * * * * * *

*/