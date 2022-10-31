#include <iostream>
#include <fstream>
using namespace std;

class User
{
private:
    static string validNames[100];
    string userName;
    string passKey;
public:
    User()
    {
        ifstream in("user.txt");
        string data;
        in>>userName;
        in>>passKey;
        in.close();
    }
    
    // to print data [delete afterwards]
    void printData()
    {
        cout<<userName<<" "<<passKey<<endl;
    }

    // in case you have to compare all
    // void checkData(string userName,string passKey)
    // {
    //     if (userName.compare(this->userName) == 0 && passKey.compare(this->passKey) ==0)
    //     {
    //         cout<<"login success"<<endl;
    //     }
    //     else
    //     {
    //         if (userName.compare(this->userName))
    //         {
    //             cout<<"not a valid user name"<<endl;
    //         }
    //         else
    //         {
    //             cout<<"invalid password"<<endl;
    //         }
    //     }
        
    // }
    int checkUserName(string userName)
    {
        if (userName.compare(this->userName))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    int checkPassKey(string passKey)
    {
        if (passKey.compare(this->passKey))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
};


int main()
{
    User prajas;
    prajas.printData();

    cout<<"username: ";
    string name;
    getline(cin,name);
    if (!prajas.checkUserName(name))
    {
        cout<<"invalid user"<<endl;
        return 0;
    }
    
    cout<<"password: ";
    string password;
    getline(cin,password);
    if (!prajas.checkPassKey(password))
    {
        cout<<"invalid password"<<endl;
        return 0;
    }

    cout<<"login success"<<endl;
    return 0;
}