#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    char *ptr;
    printf("*************************");
    printf("\n\nEmployee 1:");
    printf("\nEnter the size of eID: ");
    scanf("%d",&n);
    ptr = (char*) malloc((n+1)*sizeof(char));

    printf("Enter eID: ");
    scanf("%s",ptr);
    printf("Dear Employee, %s Welcome",ptr);
    printf("\n*************************");

    printf("\n\nEmployee 2:");
    printf("\nEnter the size of eID: ");
    scanf("%d",&n);
    ptr = (char*) realloc(ptr,(n+1)*sizeof(char));

    printf("Enter eID: ");
    scanf("%s",ptr);
    printf("Dear Employee, %s Welcome",ptr);
    printf("\n*************************");

    printf("\n\nEmployee 3:");
    printf("\nEnter the size of eID: ");
    scanf("%d",&n);
    ptr = (char*) realloc(ptr,(n+1)*sizeof(char));

    printf("Enter eID: ");
    scanf("%s",ptr);
    printf("Dear Employee, %s Welcome",ptr);

    printf("\n*************************");

    free(ptr);
    //printf("\nPress any key to exit");
    //getch();
    return 0;
}


/* ABC PVT LTD manages employee record of other companies.
Employee id can be of any length and can contain any character.
take employee id length first. in length integer variable.
for 3 employees you have to take employee id as input
and display it on screen
store the employee id in ONLY ONE character array which is located DYNAMICALLY 

e.g.
employee 1:
enter length of eID:
38
dynamically allocate character array
take input from user

employee 2:
enter length of eID:
3
dynamically allocate character array
take input from user

employee 3:
enter length of eID:
8
dynamically allocate character array
take input from user



*/