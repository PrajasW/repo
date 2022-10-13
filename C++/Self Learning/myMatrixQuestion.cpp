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

bool checkNumber(float num,int min,int max)
{
    bool status = false;
    for (int i = min; i <= max; i++)
    {
        if (num == (float) i)
        {
            status = true;
            break;
        }
    }
    return status;
}

bool checkMatrix(Matrix matrix,int min,int max)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (checkNumber(matrix.elementAt[row][col],min,max) == false)
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    Matrix testMatrix;
    int counter=0;
    int lowerLimit = 0;
    int higherLimit = 9;
    // cout<<checkMatrix(testMatrix.inverse(),lowerLimit,higherLimit);

    for (testMatrix.elementAt[0][0] = lowerLimit; testMatrix.elementAt[0][0] <= higherLimit; testMatrix.elementAt[0][0]++)
    {
        for (testMatrix.elementAt[0][1] = lowerLimit; testMatrix.elementAt[0][1] <= higherLimit; testMatrix.elementAt[0][1]++)
        {
            for (testMatrix.elementAt[0][2] = lowerLimit; testMatrix.elementAt[0][2] <= higherLimit; testMatrix.elementAt[0][2]++)
            {
                for (testMatrix.elementAt[1][0] = lowerLimit; testMatrix.elementAt[1][0] <= higherLimit; testMatrix.elementAt[1][0]++)
                {
                    for (testMatrix.elementAt[1][1] = lowerLimit; testMatrix.elementAt[1][1] <= higherLimit; testMatrix.elementAt[1][1]++)
                    {
                        for (testMatrix.elementAt[1][2] = lowerLimit; testMatrix.elementAt[1][2] <= higherLimit; testMatrix.elementAt[1][2]++)
                        {
                            for (testMatrix.elementAt[2][0] = lowerLimit; testMatrix.elementAt[2][0] <= higherLimit; testMatrix.elementAt[2][0]++)
                            {
                                for (testMatrix.elementAt[2][1] = lowerLimit; testMatrix.elementAt[2][1] <= higherLimit; testMatrix.elementAt[2][1]++)
                                {
                                    for (testMatrix.elementAt[2][2] = lowerLimit; testMatrix.elementAt[2][2] <= higherLimit; testMatrix.elementAt[2][2]++)
                                    {
                                        if (checkMatrix(testMatrix.inverse(),lowerLimit,higherLimit))
                                        {
                                            counter++;
                                            cout<<endl<<"--Matrix "<<counter<<"--"<<endl;
                                            testMatrix.display();
                                            cout<<endl<<"--Matrix "<<counter<<" Inverse--"<<endl;
                                            testMatrix.inverse().display();
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } 
        }   
    }
    
    if (counter == 0)
    {
        cout<<"No such Matrix";
    }
    else
    {
        cout<<endl<<"total such matrix = "<<counter<<endl;
    }


    cout<<endl<<endl<<endl<<endl<<"Press Any Key To Exit"<<endl;
    getchar();
    

    return 0;
}
