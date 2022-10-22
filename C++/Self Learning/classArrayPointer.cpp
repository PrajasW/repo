#include <iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
public:
    void setId(int i)
    {
        id = i;
    }
    void setPrice(float i)
    {
        price = i;
    }
    void getData()
    {
        cout<<id<<"\t"<<price<<endl;
    }
};

int main()
{
    int size = 10;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    for (int i = 0; i < size; i++)
    {
        ptr->setId(i+1000);
        ptr++;
    }
    ptr = ptrTemp;
    int *pint = new int;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Price of Item id "<<(1000+i)<<": ";
        cin>>*pint;
        ptr->setPrice(*pint);
        ptr++;
    }
    delete pint;    
    cout<<endl<<endl<<"--Shop Item Data--:"<<endl<<endl;
    cout<<"Id\tPrice"<<endl;
    ptr = ptrTemp; 
    for (int i = 0; i < size; i++)
    {
        ptr->getData();
        ptr++;
    }
    ptr = ptrTemp;
    delete ptrTemp;
    delete[] ptr;
    return 0;
}