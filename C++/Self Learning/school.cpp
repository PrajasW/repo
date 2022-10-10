#include <iostream>
using namespace std;


class Student 
{
    private:
    char fullName[34];
    int grade;
    char div;
    float percentage;

    public:
    void setData()
    {
        cout<<"Enter Your Full Name: ";
        cin>>fullName;
        cout<<"Enter Your Grade: ";
        cin>>grade;
        cout<<"Enter Your Divsion: ";
        cin>>div;
        cout<<"Enter Your Marks in Percentage: ";
        cin>>percentage;
    }
    void getData(void);
    
};
// how to define member function outside class
void Student :: getData()
{
    cout<<fullName<<" of "<<grade<<"-"<<div<<" has scored "<<percentage<<"%"<<endl;
}

int main()
{
    Student Prajas;
    Prajas.setData();
    Prajas.getData();
    return 0;
}