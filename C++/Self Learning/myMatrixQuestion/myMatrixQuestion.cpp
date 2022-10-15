/*
Q] list=[0,1,2,3,4,5,6,7,8,9]
A matrix is made such that it's elements are from the list.
find and print all such matrices who's inverse can be written by only using the
numbers in list.
*/

#include <iostream>
#include "matrix.cpp"
using namespace std;

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
    int successCounter=0;
    long testConunter=0;
    long totalMatrices=0;
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
                                        testMatrix.setDet();
                                        totalMatrices++;
                                        if (testMatrix.det == 0)
                                        {
                                            continue;
                                        }
                                        if (checkMatrix(testMatrix.inverse(),lowerLimit,higherLimit))
                                        {
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
        cout<<endl<<"--Total "<<totalMatrices<<" Matrices Possible--"<<endl;
        cout<<"--"<<testConunter<<" Matrices Checked--"<<endl;
        cout<<endl<<"--No Matrix Satisfies--"<<endl<<endl;
    }
    else
    {
        cout<<endl<<"--Total "<<totalMatrices<<" Matrices Possible--"<<endl;
        cout<<"--"<<testConunter<<" Matrices Checked--"<<endl;
        cout<<"--"<<successCounter<<" Matrices Satisfy--"<<endl<<endl;
    }

    return 0;
}
