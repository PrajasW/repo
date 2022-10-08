// better program

#include <stdio.h>
#include <conio.h>

int main()
{
    char name[] = "Prajas";
    char item[] = "Chocolate";
    char outlet[] = "Garina Choco pvt ltd";

    FILE *ptr = fopen("Letter2.txt","w");
    fprintf(ptr,"Thank you %s for purchacing %s from our outlet %s\nPlease visit our outlet %s for any kind of problems.\nWe plan to server you again soon.",name,item,outlet,outlet);
    fclose(ptr);

    
    //printf("\nPress any key to exit");
    //getch();
    return 0;
}