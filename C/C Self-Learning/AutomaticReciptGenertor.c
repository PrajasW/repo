#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char letter[1000] = "Thanks ";
    char name[34]="Prajas";
    strcat(letter,name);
    strcat(letter," for purchasing ");
    char item[34]="Choco Pie";
    strcat(letter,item);
    strcat(letter," from our outlet ");
    char outlet[100] = "ORION chocolates pvt ltd";
    strcat(letter,outlet);
    strcat(letter,"\nPlease Visit our outlet ");
    strcat(letter,outlet);
    strcat(letter," for any kind of problems.\nWe plan to server you again soon.");

    FILE *ptr = NULL;
    ptr = fopen("Letter.txt","w");
    fprintf(ptr,"%s",letter);
    fclose(ptr);
    //printf("\nPress any key to exit");
    //getch();
    return 0;
}