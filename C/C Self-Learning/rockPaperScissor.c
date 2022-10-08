#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

static int compScore,userScore,gameNo;
char name[34];

void playGame(char userSays)
{
    srand(time(NULL));
    char compSays;

    switch (rand()%3)
    {
    case 0:
        compSays = 'r';
        printf("\nComputer chooses Rock");
        break;
    
    case 1:
        compSays = 'p';
        printf("\nComputer chooses Paper");
        break;

    case 2:
        compSays = 's';
        printf("\nComputer chooses Scissors");
        break;

    default:
        break;
    }

    if (compSays == userSays)
    {
        printf("\n\nIt's a Draw\n");
    }
    
    else
    {
        if (userSays == 'r' && compSays == 's' || userSays == 's' && compSays == 'p' || userSays == 'p' && compSays == 'r')
        {
            printf("\n\n%s Wins\n",name);    
            userScore++;
        }
        else
        {
            printf("\n\nComputer Wins\n");    
            compScore++;
        }
        
    }

    gameNo++;
}
int main()
{
    printf("\n\n\n###### RPS GAME ######");
    printf("\n\nYou'll play a game of rock paper scissors\nthree times with the computer\nThe one with more points at the end wins\n\npress r to choose rock\npress p to choose paper\npress s to choose scissors");
    printf("\n\nWhat's Your Name: ");
    scanf("%s",name);
    while (gameNo<3)
    {
        char userSays[10];
        printf("\n*********************\n");
        printf("\nEnter your choise: ");
        scanf("%s",userSays);
        if (userSays[0] == 'r' || userSays[0] == 'p' || userSays[0] == 's')
        {
            playGame(userSays[0]);        
        }
        else
        {
            printf("\nINVALID CHOISE");
        }
    }
    
    printf("\n*********************\n");
    printf("\nComputer Score:%d     User Score:%d",compScore,userScore); 

    if (compScore == userScore)
    {
        printf("\nIt's a Draw");
    }
    
    if (compScore > userScore)
    {
        printf("\\nnComputer Wins B)");
    }

    if (userScore > compScore)
    {
        printf("\n\n%s WINS!!! congratulations, but you just won by luck ",name);
    }
    printf("\n\n\n\nPress any key to exit");
    getch();
    return 0;
}