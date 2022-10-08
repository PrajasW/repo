#include <stdio.h>
#include <string.h>
// #include <stdlib.h>

// take 3 arguments .\calc.exe <operation> <num1> <num2> 
// command line calculator

int stringToNumber (char const *string)
{
    int number = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        number = number*10 + (int) string[i] - 48;
    }
    return number;
}

int main(int argc, char const *argv[])
{
    if (argc > 4)
    {
        printf("Too many Arguments");
        return 0;
    }
    if (argc < 4)
    {
        printf("Insuffieient Arguments");
        return 0;
    }
    
    char const *operation = argv[1];
    char const *str1 = argv[2];
    char const *str2 = argv[3];    

    // you can use atoi(*char) --> to convert string to number --> stdlib.h

    int num1 = stringToNumber(str1);
    int num2 = stringToNumber(str2);
    int wordFound = 0;
    int operationNumber = -1;
    char list[][10] = {"add","subtract","multiply","divide","mod"};
    int listLength = 5;
    for(int i=0;i<listLength;i++)
    {
        if(strcmp(operation,list[i]) == 0)
        {
            operationNumber = i;
            wordFound = 1;
        }
    }
    
    if (wordFound == 0)
    {
        printf("Invalid Operation");
        return 0;
    }
    
    switch (operationNumber)
    {
    case 0:
        printf("%d",num1+num2);
        break;
    
    case 1:
        printf("%d",num1-num2);
        break;
        
    case 2:
        printf("%d",num1*num2);
        break;
        
    case 3:
        printf("%f",(float)num1/num2);
        break;

    case 4:
        printf("%d",num1%num2);
        break;

    }

    return 0;
}