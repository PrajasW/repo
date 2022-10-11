#include <iostream>
using namespace std;

class Bank
{
private:
    int numberOfAccounts;
    int totalUnitsOfMoney;
    int A[100];
    char reslutValue[100];
public:
    void setValue();
    void withdrawRequest();
};

void Bank::setValue()
{
    cin>>numberOfAccounts>>totalUnitsOfMoney;
    for (int i = 0; i < numberOfAccounts; i++)
    {
        cin>>A[i];
    }
}

void Bank::withdrawRequest()
{
    for (int i = 0; i < numberOfAccounts; i++)
    {
        if(A[i]>totalUnitsOfMoney)
        {
            reslutValue[i]='0';
        }
        else
        {
            reslutValue[i]='1';
            totalUnitsOfMoney=totalUnitsOfMoney-A[i];
        }
    }
    reslutValue[numberOfAccounts] = '\0';
    cout<<reslutValue<<endl;
}
int main()
{
    int totalTestCases;
    cin>>totalTestCases;
    Bank testCase[totalTestCases];
    for (int i = 0; i < totalTestCases; i++)
    {
        testCase[i].setValue();
    }
    for (int i = 0; i < totalTestCases; i++)
    {
        testCase[i].withdrawRequest();
    }
    
    return 0;
}