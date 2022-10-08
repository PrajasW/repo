#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int randomNumber(int n)
{
    srand(time(NULL));
    printf("Random Number from 1 to %d is %d",n,(rand()/n)+1);
}

int main()
{

    // time(NULL) --> will return time <time.h>
    // srand(seed) --> srand takes seed as an input and is defined inside <stdlib.h>
    srand(time(NULL));
    printf("Random Number from 0 to 2 is: %d", rand()%3);

    printf("\nPress any key to exit");
    getch();
    return 0;
}