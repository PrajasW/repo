#include <stdio.h>


int sumOf(int x, int y)
{
    return x+y;
}

int differnceOf(int x, int y)
{
    return x-y;
}

int productOf(int x, int y)
{
    return x*y;
}

float divisionOf(int x, int y)
{
    float div = (float) x/y;
    return div;
}

int main(int argc, char const *argv[])
{
    printf("Enter two number: ");
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("\nSum =%d", sumOf(a,b));
    printf("\ndifference =%d", differnceOf(a,b));
    printf("\nproduct =%d", productOf(a,b));
    printf("\ndivision =%f",divisionOf(a,b));
    return 0;
}
