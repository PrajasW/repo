#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// string dataPath = ".\\Data\\"; 

class Bank
{
    string name;
    string bankPin;
    float balance;
    string file = "Data\\"+bankId+".txt";

public:
    string bankId;
    void setData()
    {
        ifstream in(file);
        getline(in,name);
        getline(in,bankPin);
    }
    float getBalance()
    {
        return balance;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Bank account;
    cout<<"Enter Your BankID: ";
    cin>>account.bankId;
    // [to write] check if the account with bankId ^^ exists
    // writing code for the file exists;
    account.setData();
    cout<<endl<<"Welcome "<<account.getName()<<" Hope You're Having a Great Day"<<endl;
    cout<<"Current Balance : "<<account.getBalance()<<endl;  

    return 0;
}