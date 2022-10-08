// Really Shitty code


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    printf("### Rock Paper Scissors Game ###");
    int gameRun = 1;

    while(gameRun = 1)
    {
        printf("\n Enter Your Choice: ");
        char userChoice;
        scanf("%c",&userChoice);
        // new rand() function will generate a random number
        // from 0 to RAND_MAX --> value 32726 atleast
        int k = rand() % 3;
        // it will return values from {0,1,2}
        // use of contitional statements
        char compChoise;
        if(k == 0)
        {
            compChoise = 'r';
        }
        else if (k == 1)
        {
            compChoise = 'p';
        }
        else if (k == 2)
        {
            compChoise = 's';
        }

        if(userChoice == compChoise)
        {
            printf("\n your choise %c \n computer choise %c \n It's a draw",userChoice,compChoise);
        }
        else
        {
            if (userChoice == 'r' && compChoise == 's' || userChoice == 's' && compChoise == 'p' || userChoice == 'p' && compChoise == 'r')
            {
                printf("\n your choise %c \n computer choise %c \n You Win !!",userChoice,compChoise);    
            }
            else
            {
                printf("\n your choise %c \n computer choise %c \n You Lose :( ",userChoice,compChoise);    
            }
            
        }
        
        printf("\nWant to play once more?:");
        char playMore;
        scanf("%c",&playMore);

        if(playMore == 'n')
        {
            gameRun = 0;
        }
    }
    return 0;
}
