#include <stdio.h>
#include <conio.h>
#include <string.h>

// int isPalindrome(int n)
// {
//     int temp;
//     int i=0;
//     char number[10];
//     while (n)
//     {
//         temp = n%10;
//         n = n/10;
//         number[i] = temp;
//         i++;
//     }
//     number[i] = '\0';

//     char numberReverse[10];
//     for (int j = strlen(number)-1,i =0; i < strlen(number), j>=0; i++,j--)
//     {
//         numberReverse[i] = number[j];
//     }
//     numberReverse[i+1] = '\0';

//     if(strcmp(number,numberReverse) == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }


int isPalindrome(int n)
{
    int revn=0;
    int temp = n;
    int i=0;
    while (n)
    {
        revn = revn*10 + n%10;
        n = n/10;
        i++;
    }
    
    if(temp == revn)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int number;
    printf("Enter a number to check if it's a palindrome: ");
    scanf("%d",&number);

    if(isPalindrome(number))
    {
        printf("\n%d is a Palindrome",number);
    }    
    else
    {
        printf("\n%d is not a Palindrome",number);
    }


    //printf("\nPress any key to exit");
    //getch();
    return 0;
}