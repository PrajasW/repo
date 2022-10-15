#include <iostream>
using namespace std;

class Matrix
{
public:
    float elementAt[3][3];   
    int det;
    void init();
    void display(bool);
    void setDet();
    void adjustZero();
    void copyMatrixElementsOf(Matrix);

    Matrix multiplyByScalar(int Scalar);
    Matrix divideByScalar(int Scalar);
    Matrix cofactor();
    Matrix adjoint();
    Matrix inverse();

    friend Matrix addMatrix(Matrix,Matrix);
    friend Matrix subMatrix(Matrix,Matrix);
    friend Matrix multiplyMatrix(Matrix,Matrix);
};

void Matrix::adjustZero()
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (elementAt[row][col] == -0)
            {
                elementAt[row][col] = 0;
            }
        }
    }
}

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
    adjustZero();
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

void Matrix::copyMatrixElementsOf(Matrix matrixToCopy)
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
    cofactor.adjustZero();
    return cofactor;
}

Matrix Matrix::adjoint()
{
    Matrix copy,adjoint;
    copy = cofactor();
    adjoint.copyMatrixElementsOf(copy);
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
    setDet();
    Matrix copy;
    copy = adjoint();
    copy.adjustZero();
    return copy.divideByScalar(det);
}

void Matrix::setDet()
{
    det = (elementAt[0][0]*(elementAt[1][1]*elementAt[2][2]-elementAt[2][1]*elementAt[1][2]))
    -(elementAt[0][1]*(elementAt[1][0]*elementAt[2][2] - elementAt[2][0]*elementAt[1][2]))
    +(elementAt[0][2]*(elementAt[1][0]*elementAt[2][1]-elementAt[2][0]*elementAt[1][1]));
}

Matrix Matrix::multiplyByScalar(int Scalar)
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

Matrix addMatrix(Matrix M1,Matrix M2)
{
    Matrix sum;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum.elementAt[row][col] = M1.elementAt[row][col] + M2.elementAt[row][col];
        }
    }
    return sum;
}

Matrix subMatrix(Matrix M1,Matrix M2)
{
    Matrix sum;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum.elementAt[row][col] = M1.elementAt[row][col] - M2.elementAt[row][col];
        }
    }
    return sum;
}

Matrix multiplyMatrix(Matrix M1,Matrix M2)
{
    Matrix multiplyMat;
    int temp;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            temp = 0;
            for (int k = 0; k < 3; k++)
            {
                temp = temp + (M1.elementAt[row][k]*M2.elementAt[k][col]);
            }
            multiplyMat.elementAt[row][col] = temp;
        }
    }
    return multiplyMat;
}
