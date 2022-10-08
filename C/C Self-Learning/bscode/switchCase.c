#include <stdio.h>

// in switch case you can't put in conditions like if
// use switch only when there is integer/character specific output

int main()
{
    // note if insted of int a -->  float a then error
    int a = 10;
    switch (a)
    {
    case 1:
        printf("number is 1");  
        break;
    
    // note defalut is not essential in syntax
    default:
        printf("number is not 1");
        break;
    }
    return 0;
}
