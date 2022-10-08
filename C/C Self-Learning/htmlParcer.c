/*
    some html is given
    extract the text from the html document
    also remove the spaces between tag and first and last character of arguemnt
    e.g.
    NOTE: it can be any tag
    <h1> this is the heading </h1>
    remove the blank space outside the line
    display on console

*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

// void removeSpace(char *orignal)
// {   
//     char copy[1000];
//     int sp=1,j=0;
//     for (int i = 0; i < strlen(orignal); i++)
//     {
//         if (orignal[i] != ' ')
//         {
//             sp=0;
//         }
//         if (sp == 0)
//         {
//             copy[j] = orignal[i];
//             j++;
//         }
//     }

//     strcpy(orignal,copy);
//     char copy2[1000];

//     for (int i = strlen(orignal); i >= 0; i--)
//     {
//         if (orignal[i] != ' ')
//         {
//             sp=0;
//         }
//         if (sp == 0)
//         {
//             copy2[j] = orignal[i];
//             j++;
//         }
//     }
//     strrev(copy2);
//     strcpy(orignal,copy2);
// }



void parse(char *orignal)
{
    char copy[1000];
    int in=0,j=0;
    for (int i = 0; i < strlen(orignal); i++)
    {
        if (orignal[i] == '<')
        {
            in = 1;
            continue;
        }
        else if(orignal[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            copy[j] = orignal[i];
            j++;
        }
    }
    strcpy(orignal,copy);

// ####### THIS IS IMPORTANT #########
    // to remove trailing spaces

    while (orignal[0] == ' ')
    {
        // shift to the left
        for (int i = 0; i < strlen(orignal); i++)
        {
            orignal[i] = orignal[i+1]; 
        }    
    }
    
    while (orignal[strlen(orignal)-1] == ' ')
    {
        orignal[strlen(orignal)-1] = '\0';
    }
    

}

int main()
{
    char string[] = "<h1>    hello world how are you        </h1>";
    parse(string);
    printf("The Parsed String is ~~%s~~",string);
}