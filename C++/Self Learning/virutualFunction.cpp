#include <iostream>
using namespace std;

class Shop
{
protected:
    int id;
    string name;
public:
    Shop(int id,string name)
    {
        this->id = id;
        this->name = name;
    }
    virtual void display()=0;
};

class ToyShop : public Shop
{
    int ageGroup;
    string anime;
public:
    ToyShop(int id,string name,int ageGroup,string anime) : Shop(id,name)
    {
        this->ageGroup = ageGroup;
        this->anime = anime;
    }
    void display()
    {
        cout<<"Product id: "<<id<<endl
            <<"Product name: "<<name<<endl
            <<"Recommended age group: "<<ageGroup<<"+"<<endl
            <<"From Anime: "<<anime<<endl;
    }
};

class FoodShop : public Shop
{
    string mfgDate;
    string expDate;
public:
    FoodShop(int id,string name,string mfgDate,string expDate) : Shop(id,name)
    {
        this->mfgDate = mfgDate;
        this->expDate = expDate;
    }
    void display()
    {
        cout<<"Product id: "<<id<<endl
            <<"Product name: "<<name<<endl
            <<"Manufacture Date: "<<mfgDate<<endl
            <<"Expiry Date: "<<expDate<<endl;
    }
};

int main()
{
    ToyShop hamleys(10593,"Anime Figuriene",18,"Evangelion");
    FoodShop haldiram(10135,"Aloo Bhujia","10/10/2022","10/11/2023");

    Shop *ptr;
    cout<<endl<<"\t---"<<endl<<endl;
    ptr = &hamleys;
    ptr->display();
    cout<<endl<<"\t---"<<endl<<endl;
    ptr = &haldiram;
    ptr->display();
    return 0;
}