#include <stdio.h>
#include <conio.h>

int main()
{
    // initializing 
    // note height is equvivalent to number of rows and width is eqvivalent to number of coloumns
    int h1,w1,h2,w2;
    printf("\n************\n\nFirst Matrix");
    printf("\n\nRows: ");
    scanf("%d",&h1);
    printf("Columns: ");
    scanf("%d",&w1);
    int matrix1[h1][w1];
    printf("\nStart inputing Matrix 1\n\n");
    for (int i = 0; i < h1; i++)
    {
        for (int j = 0; j < w1; j++)
        {
            printf("Enter element A%d%d : ",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    
    printf("\n\n************\n\nSecond Matrix");
    printf("\n\nRows: ");
    scanf("%d",&h2);
    printf("Columns: ");
    scanf("%d",&w2);
    int matrix2[h2][w2];
    printf("\nStart inputing Matrix 2\n\n");
    for (int i = 0; i < h2; i++)
    {
        for (int j = 0; j < w2; j++)
        {
            printf("Enter element A%d%d : ",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    // displaying the matrix in matrix like format
    printf("\n\n***************\n");

    printf("\n\nFirst Matrix\n");
    for (int i = 0; i < h1; i++)
    {
        for (int j = 0; j < w1; j++)
        {
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSecond Matrix\n");
    for (int i = 0; i < h2; i++)
    {
        for (int j = 0; j < w2; j++)
        {
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }


    // multiplication of matrix :: first checking if can multiply

    if (w1 != h2)
    {
        printf("\n\n The no. of. Coloumns of First matrix and Rows of Second Matrix Must be same");
        printf("\n\n\nPress any key to exit");
        getch();
        return 0;
    }

    // multiplication of matrix :: multiplying matrix

    int count = w1; //it will store the value of width of first matrix == height of second matrix
    int multiplicationMatrix[h2][w1];
    int temp=0;
    for (int i = 0; i < h2; i++)
    {
        for (int j = 0; j < w1; j++)
        {
            temp = 0;
            for (int k = 0; k < count; k++)
            {
                temp = temp + (matrix1[i][k]*matrix2[k][j]);
            }
            multiplicationMatrix[i][j] = temp;
        }
    
    }
    
    // matrix multiplication :: printing the multiplication matrix

    printf("\n\nMultiplication Matrix\n");
    for (int i = 0; i < h1; i++)
    {
        for (int j = 0; j < w2; j++)
        {
            printf("%d ",multiplicationMatrix[i][j]);
        }
        printf("\n");
    }


    printf("\nPress any key to exit");
    getch();
    return 0;
}