#include <iostream>
using namespace std;

class Matrix
{
public:
    float elementAt[3][3];
    bool precision = false;
    int det;
    void display();
    void copyMatrix(Matrix);
    Matrix divideByScalar(int Scalar);
    void setDet();
};
void Matrix::setDet()
{
    det = (elementAt[0][0]*(elementAt[1][1]*elementAt[2][2]-elementAt[2][1]*elementAt[1][2]))
    -(elementAt[0][1]*(elementAt[0][1]*elementAt[2][2] - elementAt[0][2]*elementAt[2][1]))
    +(elementAt[0][2]*(elementAt[0][1]*elementAt[1][2]-elementAt[0][2]*elementAt[1][1]));
}

Matrix Matrix::divideByScalar(int Scalar)
{
    Matrix M;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            M.elementAt[row][col] = elementAt[row][col]/Scalar;
        }
        
    }
    return M;
}

void Matrix::display()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if(precision)
                printf("%.2f ",elementAt[row][col]);
            else
                cout<<elementAt[row][col]<<" ";
        }
        cout<<endl;
    }
}

void Matrix::copyMatrix(Matrix matrixToCopy)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            elementAt[row][col] = matrixToCopy.elementAt[row][col];
        }
        
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
    
    cout<<endl<<"--Matrix Inputed--"<<endl;
    orignalMatrix.display();
    orignalMatrix.setDet();

    if (orignalMatrix.det == 0)
    {
        cout<<endl<<"The Determinent of The Matrix is Zero\nInverse of this Matrix is INVALID"<<endl;
        return 0;
    }

    // cout<<"minor at position"<<endl;
    
    // logic to find conjugate matrix
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            int minorMatrix[2][2];
            int x=0,y=0;
            for (int i = 0; i < 3; i++)
            {
                if (i == row)
                {
                    continue;
                }
                for (int j = 0; j < 3; j++)
                {
                    if (j == col)
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
            // for (int i = 0; i < 2; i++)
            // {
            //     for (int j = 0; j < 2; j++)
            //     {
            //         cout<<minorMatrix[i][j]<<" ";
            //     }
            //     cout<<endl;
            // }
            
            int minor = minorMatrix[0][0]*minorMatrix[1][1] - minorMatrix[0][1]*minorMatrix[1][0];
            // cout<<minor<<endl;
            cofactorMatrix.elementAt[row][col]= (float) power(-1,row+col+1)*minor;
        }
    }
    cout<<endl<<"--Cofactor Matrix--"<<endl;
    cofactorMatrix.display();
    
    Matrix adjointMatrix;
    adjointMatrix.copyMatrix(cofactorMatrix);
    adjointMatrix.elementAt[1][0] = cofactorMatrix.elementAt[0][1];
    adjointMatrix.elementAt[2][0] = cofactorMatrix.elementAt[0][2];
    adjointMatrix.elementAt[0][1] = cofactorMatrix.elementAt[1][0];
    adjointMatrix.elementAt[0][2] = cofactorMatrix.elementAt[2][0];
    adjointMatrix.elementAt[2][1] = cofactorMatrix.elementAt[1][2];
    adjointMatrix.elementAt[1][2] = cofactorMatrix.elementAt[2][1];
    
    cout<<endl<<"--Adjoint Matrix--"<<endl;
    adjointMatrix.display();

    Matrix inverseMatrix;
    inverseMatrix.precision = true;
    inverseMatrix.copyMatrix(adjointMatrix.divideByScalar(orignalMatrix.det));

    cout<<endl<<"--Inverse Matrix--"<<endl;
    inverseMatrix.display();

    return 0;
}