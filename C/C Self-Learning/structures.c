// cool stuff

#include <stdio.h>
#include <conio.h>
#include <string.h>

// struct can be defined locally or globally 
struct student
{
    char name[100];
    int id;
    int marks;
}youcanDeclarehereToo, std3;

void showInfo(struct student std)
{
    printf("\nName: %s",std.name);
    printf("\nID: %d",std.id);
    printf("\nMarks: %d",std.marks);

}

// void getInfo(struct student *std)
// {
//     printf("\nName: ");
//     gets(*std->name);
//     printf("\nID: ");
//     scanf("%d",std->id);
//     printf("\nMarks: ");
//     scanf("%d",std->marks);
// }

int main()
{
    // we can declare and initialize together or
    struct student s1,s2 = {"Prajas",32,16};
    // or we can initialize later
    strcpy(s1.name,"Rahul");
    s1.id = 398;
    s1.marks = 89;

    showInfo(s1);
    printf("\n");
    showInfo(s2);
    printf("\n");
    // getInfo(&std3);
    showInfo(std3);

    /*printf("\nPress any key to exit");
    getch();*/
    return 0;
}