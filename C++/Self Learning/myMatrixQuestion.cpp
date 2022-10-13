/*
Q] list=[0,1,2,3,4,5,6,7,8,9]
A matrix is made such that it's elements are from the list.
find and print all such matrices who's inverse can be written by only using the
numbers in list.
*/

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

    void adjustZero();
    Matrix cofactor();
    Matrix adjoint();
    Matrix inverse();
    void setDet();
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
    // cofactor.adjustZero(); --> ###Uncomment for using cofactor() indivisually### commenting for faster code run 
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
    bool status = true;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (checkNumber(matrix.elementAt[row][col],min,max) == false)
            {
                status = false;
                break;
            }
        }
        if (status == false)
        {
            break;
        }
    }
    return status;
}


int main()
{
    Matrix testMatrix;
    // manual testing :: statisfying case
    // testMatrix.elementAt[0][0] = 1;
    // testMatrix.elementAt[0][1] = 0;
    // testMatrix.elementAt[0][2] = 0;
    // testMatrix.elementAt[1][0] = 0;
    // testMatrix.elementAt[1][1] = 1;
    // testMatrix.elementAt[1][2] = 0;
    // testMatrix.elementAt[2][0] = 0;
    // testMatrix.elementAt[2][1] = 0;
    // testMatrix.elementAt[2][2] = 1;

    // manual testing :: non-statisfying case
    // testMatrix.elementAt[0][0] = 4;
    // testMatrix.elementAt[0][1] = 2;
    // testMatrix.elementAt[0][2] = 6;
    // testMatrix.elementAt[1][0] = 2;
    // testMatrix.elementAt[1][1] = 1;
    // testMatrix.elementAt[1][2] = 7;
    // testMatrix.elementAt[2][0] = 3;
    // testMatrix.elementAt[2][1] = 2;
    // testMatrix.elementAt[2][2] = 8;

    // cout<<endl<<"--Matrix--"<<endl;
    // testMatrix.display();
    // // testMatrix.setDet(); --> now made inside inverse so no need to declare
    // cout<<endl<<"--Inverse Matrix--"<<endl;
    // testMatrix.inverse().display();

    // // testing the if-sequence inside loop
    // if (checkMatrix(testMatrix.inverse(),-1,1))
    //     {
    //         testMatrix.setDet();
    //         cout<<checkMatrix(testMatrix.inverse(),-1,1);
    //         cout<<endl<<"--Matrix"<<"--"<<endl;
    //         testMatrix.display();
    //         cout<<endl<<"--Matrix"<<" Inverse--"<<endl;
    //         testMatrix.inverse().display();
    //     }

    // general programs
    int successCounter=0;
    long testConunter=0;
    int lowerLimit = 0;
    int higherLimit = 9;
    
    for (testMatrix.elementAt[0][0] = lowerLimit; testMatrix.elementAt[0][0] <= higherLimit; testMatrix.elementAt[0][0]++)
    {
        cout<<endl<<"Running Test "<<(testMatrix.elementAt[0][0]-lowerLimit+1)<<"/"<<(higherLimit-lowerLimit+1)<<endl;
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
                                        // successCounter++;
                                        // cout<<endl<<"--Matrix "<<successCounter<<"--"<<endl;
                                        // testMatrix.display();
                                        testMatrix.setDet();
                                        if (checkMatrix(testMatrix.inverse(),lowerLimit,higherLimit))
                                        {
                                            if (testMatrix.det == 0)
                                            {
                                                continue;
                                            }
                                            successCounter++;
                                            cout<<endl<<"--Matrix "<<successCounter<<"--"<<endl;
                                            testMatrix.display();
                                            cout<<endl<<"--Matrix "<<successCounter<<" Inverse--"<<endl;
                                            testMatrix.inverse().display();
                                        }
                                        testConunter++;
                                    }
                                }
                            }
                        }
                    }
                }
            } 
        }   
    }
    
    if (successCounter == 0)
    {
        cout<<endl<<"No such Matrix"<<endl;
    }
    else
    {
        cout<<endl<<"Total "<<successCounter<<" such Matrix out of "<<testConunter<<endl;
    }


    // cout<<endl<<endl<<endl<<endl<<"Press Any Key To Exit"<<endl;
    // getchar();
    

    return 0;
}
