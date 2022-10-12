#include <iostream>
using namespace std;

class Matrix
{
public:
    int elementAt[3][3];
    void display();
};

void Matrix::display()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<elementAt[row][col]<<" ";
        }
        cout<<endl;
    }
}

int power(int base,int index)
{
    int temp=base;
    for (int i = 0; i < index; i++)
    {
        temp = temp*base;
    }
    return temp;
}


int main()
{
    Matrix orignalMatrix,cofactorMatrix;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<"element at "<<row+1<<col+1<<" : ";
            cin>>orignalMatrix.elementAt[row][col];
        }
    }
    system("cls");
    cout<<endl<<"--Matrix Inputed--"<<endl;
    orignalMatrix.display();

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            int minorMatrix[2][2];
            int x=0,y=0;
            int counter=1;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (row == i || col == j)
                    {
                        continue;
                    }
                    else
                    {
                        minorMatrix[x][y] = orignalMatrix.elementAt[i][j];
                        // managing elements
                        if (x==0 && y==0)
                        {
                            y++;
                        }
                        else if (x==0 && y==1)
                        {
                            x++;
                            y--;
                        }
                        else if (x==1 && y==0)
                        {
                            y++;
                        }
                    }
                }
                
            }
            int minor = minorMatrix[0][0]*minorMatrix[1][1]+minorMatrix[0][1]*minorMatrix[0][1];
            cofactorMatrix.elementAt[row][col]= power(-1,row+col+1)*minor;
        }
    }
    cout<<endl<<"--Cofactor Matrix--"<<endl;
    cofactorMatrix.display();
    
    return 0;
}