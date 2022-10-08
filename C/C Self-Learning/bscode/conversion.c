#include <stdio.h>
float convert(float value,float factor)
{   
    printf("Enter value to convert:");
    scanf("%f",&value);
    return (value*factor);
}

int main()
{
    float kmTomiles = 0.621371;
    float inchTofoot = 0.0833333;
    float cmToinches = 0.393701 ;
    float poundToKg = 0.453592;
    float inchTometer = 0.0254;
    start:
    while(1) //infinity loop
    {
        char dataUnit;
        float dataValue;
        printf("\n\n\t1.km to miles\n\t2.inches to foot\n\t3.cm to inches\n\t4.pound to kg\n\t5.inches to meter\n\tpress q to quit\n");
        scanf("%c",&dataUnit);
        switch (dataUnit)
        {
            case '1':
                printf ("%f km is %f miles",dataValue,convert(dataValue,kmTomiles));
                break;
            case '2':
                printf ("%f inches is %f foot",dataValue,convert(dataValue,inchTofoot));
                break;
            case '3':
                printf ("%f cm is %f inches",dataValue,convert(dataValue,cmToinches));
                break;
            case '4':
                printf ("%f pound is %f kg",dataValue,convert(dataValue,poundToKg));
                break;
            case '5':
                printf ("%f inches is %f meter",dataValue,convert(dataValue,inchTometer));
                break;
            case 'q':
                printf("Quitting Program...");
                goto end;
                break;       
            default:
                printf("\nInvalid Input");
                goto start;
        }
    }
    end:
    return 0;
}
