// to find inverse of a matrix using oop
#include <iostream>
using namespace std;


class Matrix
{
public:
    float elementAt[3][3];
    int det;
    void init();
    void display(bool);
    void copyMatrix(Matrix);
    Matrix divideByScalar(int Scalar);

    Matrix cofactor();
    Matrix adjoint();
    Matrix inverse();
    void setDet();
};

void Matrix::init()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            cout<<"element at "<<row+1<<col+1<<" : ";
            cin>>elementAt[row][col];
        }
    }
}

void Matrix::display(bool precision=false)
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

Matrix Matrix::cofactor()
{
    Matrix cofactor;
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
                        minorMatrix[x][y] = elementAt[i][j];
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
            int minor = minorMatrix[0][0]*minorMatrix[1][1] - minorMatrix[0][1]*minorMatrix[1][0];
            cofactor.elementAt[row][col]= (float) power(-1,row+col+1)*minor;
        }
    }
    return cofactor;
}

Matrix Matrix::adjoint()
{
    Matrix copy,adjoint;
    copy = cofactor();
    adjoint.copyMatrix(copy);
    adjoint.elementAt[1][0] = copy.elementAt[0][1];
    adjoint.elementAt[2][0] = copy.elementAt[0][2];
    adjoint.elementAt[0][1] = copy.elementAt[1][0];
    adjoint.elementAt[0][2] = copy.elementAt[2][0];
    adjoint.elementAt[2][1] = copy.elementAt[1][2];
    adjoint.elementAt[1][2] = copy.elementAt[2][1];
    return adjoint;
}


Matrix Matrix::inverse()
{
    Matrix copy;
    copy = adjoint();
    return copy.divideByScalar(det);
}

void Matrix::setDet()
{
    det = (elementAt[0][0]*(elementAt[1][1]*elementAt[2][2]-elementAt[2][1]*elementAt[1][2]))
    -(elementAt[0][1]*(elementAt[1][0]*elementAt[2][2] - elementAt[2][0]*elementAt[1][2]))
    +(elementAt[0][2]*(elementAt[1][0]*elementAt[2][1]-elementAt[2][0]*elementAt[1][1]));
}

Matrix Matrix::divideByScalar(int Scalar)
{
    Matrix copy;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            copy.elementAt[row][col] = elementAt[row][col]/Scalar;
        }
        
    }
    return copy;
}


int main()
{
    Matrix orignalMatrix,cofactorMatrix,adjointMatrix,inverseMatrix;
    
    // testing value
    // orignalMatrix.elementAt[0][0] = 5;
    // orignalMatrix.elementAt[0][1] = 7;
    // orignalMatrix.elementAt[0][2] = 8;
    // orignalMatrix.elementAt[1][0] = 1;
    // orignalMatrix.elementAt[1][1] = 4;
    // orignalMatrix.elementAt[1][2] = 5;
    // orignalMatrix.elementAt[2][0] = 6;
    // orignalMatrix.elementAt[2][1] = 3;
    // orignalMatrix.elementAt[2][2] = 2;
    orignalMatrix.init();
    cout<<endl<<"--Matrix Inputed--"<<endl;
    orignalMatrix.display();
    orignalMatrix.setDet();
    
    if (orignalMatrix.det == 0)
    {
        cout<<endl<<"The Determinent of The Matrix is Zero\nInverse of this Matrix is INVALID"<<endl;
        return 0;
    }

    cofactorMatrix = orignalMatrix.cofactor();
    cout<<endl<<"--Cofactor Matrix--"<<endl;
    cofactorMatrix.display();
    adjointMatrix = orignalMatrix.adjoint();
    cout<<endl<<"--Adjoint Matrix--"<<endl;
    adjointMatrix.display();

    inverseMatrix = orignalMatrix.inverse();
    cout<<endl<<"--Inverse Matrix--"<<endl;
    inverseMatrix.display(true);

    return 0;
}
