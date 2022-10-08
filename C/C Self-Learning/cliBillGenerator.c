// incomplete
// GenBill.txt
// RefBill.txt



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// the core of this program
char *replace(char *str,char *oldWord,char *newWord)
{
    char *resultString;
    int i,count=0;
    int oldWordLength = strlen(oldWord); 
    int newWordLength = strlen(newWord); 
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(strstr(&str[i],oldWord) == &str[i])
        {
            count++;
            // jump over this word
            i = i + oldWordLength - 1; //did '-1' to counter the i++
        }
    }

    i=0;
    while(*str)
    {
        if(strstr(str,oldWord) == str)
        {
            strcpy(&resultString[i],newWord);
            i = i + newWordLength;
            str = str + i;
        }
        else
        {
            resultString[i] = *str;
            i++;
            str++; 
        }
    }
    // making a new string to fit in the replaced words
    resultString = (char *) malloc(i + count * (newWordLength - oldWordLength) + 1);
    
    
    return resultString;
}

int main()
{
    char name[34];
    char item[34]; 
    char outlet[34];
    char string[1000];
    char *newStr;

    FILE *ptr = fopen("RefBill.txt","r");
    fgets(string,1000,ptr);
    fclose(ptr);

    printf("The orignal bill is\n%s",string);

    // replace the stuff and put in different string
    newStr = replace(string,"{{name}}",name);
    newStr = replace(newStr,"{{item}}",item);
    newStr = replace(newStr,"{{outlet}}",outlet);

    printf("\n\nThe Generated bill is\n%s",string);

    FILE *cpyptr = fopen("GenBill.txt","w");
    fputs(string,ptr);
    fclose(cpyptr);
    

    //printf("\nPress any key to exit");
    //getch();
    return 0;
}