// use of Function Pointers

#include <stdio.h>
#include <math.h>
#define PI 3.14

float Edistance(int x1,int y1,int x2,int y2)
{
    return (sqrt(pow((x1-x2),2)+pow((y1-y2),2)));
}

float areaOfCircle(int x1,int y1,int x2,int y2,float (*distance)(int,int,int,int))
{
    return pow(distance(x1,y1,x2,y2),2)*PI ;
}

int main(int argc, char const *argv[])
{
    int x1,y1,x2,y2;
    printf("Enter the value of x1: ");
    scanf("%d",&x1);
    
    printf("Enter the value of y1: ");
    scanf("%d",&y1);
    
    printf("Enter the value of x2: ");
    scanf("%d",&x2);
    
    printf("Enter the value of y2: ");
    scanf("%d",&y2);

    float area;
    area = areaOfCircle(x1,y1,x2,y2,Edistance);

    printf("Distance Between this points is %f",Edistance(x1,y1,x2,y2));
    printf("\nArea of this circle is %f",area);
    
    //printf("\nPress any key to exit");
    //getch();
    return 0;
}