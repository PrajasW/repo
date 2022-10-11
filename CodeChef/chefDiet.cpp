#include <iostream>
using namespace std;

class Diet
{
private:
    int duration; //in days (N)    
    int minProtienIntakePerDay; //(K)
    int protienBoughtOnDay[101]; // (A)
    int protienInShelf=0;
public:
    void setDiet();
    void checkEnoughProtien();
};

void Diet::setDiet() //[working properly]
{
    cin>>duration>>minProtienIntakePerDay;
    for (int i = 0; i < duration; i++)
    {
        cin>>protienBoughtOnDay[i];
    }
}
void Diet::checkEnoughProtien()
{
    int day = -1;
    for (int i = 0; i < duration; i++)
    {
        protienInShelf = protienInShelf + protienBoughtOnDay[i];
        if (protienBoughtOnDay[i] < protienInShelf)
        {
            day = i+1;
        }
        else
        {
            protienInShelf = protienInShelf - minProtienIntakePerDay;
        }
    }
    if (day == -1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO "<<day;
    }
    
    
}

int main()
{
    int totalTest;
    cin>>totalTest;
    Diet testCase[totalTest];
    for (int i = 0; i < totalTest; i++)
    {
        testCase[i].setDiet();
    }
    for (int i = 0; i < totalTest; i++)
    {
        testCase[i].checkEnoughProtien();
    }
    return 0;
}