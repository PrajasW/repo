#include <stdio.h>
#include <conio.h>
#include <string.h>

struct driverDataType
{
    char name[100];
    char drivingLincenceNumber[100];
    char route[100];
    int kms;
};

int main()
{

    int numberOfDrivers;        
    printf("Enter The Number of Drivers: ");
    scanf("%d",&numberOfDrivers);
    struct driverDataType DriversData[numberOfDrivers];
    
    printf("\n******************\n");
    for (int i = 0; i < numberOfDrivers; i++)
    {
        printf("\nEnter Name: ");
        scanf("%s",&DriversData[i].name);
        printf("Enter Driving Licesce Number: ");
        scanf("%s",&DriversData[i].drivingLincenceNumber);
        printf("Enter Route: ");
        scanf("%s",&DriversData[i].route);
        printf("Enter Distance Traveled (approx. in kms): ");
        scanf("%d",&DriversData[i].kms);
        printf("\n******************\n");
    }

    printf("\n\n##### Driver Data of ABC company ######");
    printf("\n\nName\t\tLicence\t\tRoute\t\tDistance Traveled\ns");

    for (int i = 0; i < numberOfDrivers; i++)
    {
        printf("\n%s\t\t%s\t\t%s\t\t%d",DriversData[i].name,DriversData[i].drivingLincenceNumber,DriversData[i].route,DriversData[i].kms);
    }
    printf("\n\n\nPress any key to exit");
    getch();
    return 0;
}