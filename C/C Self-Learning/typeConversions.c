#include <stdio.h>

int main()
{
    int a = 10, b = 5;
    float c = 2, d = 1.2;

    printf("a/b = %d \n",a/b);
    printf("a/c = %f \n",a/c);
    printf("b/c = %f \n",b/c);
    printf("c/d = %f \n",c/d);

    return 0;
}

// this means that when doing arithmatics with different type of data:
// int & int --> int 
// float & int --> float 
// float & float --> float 
