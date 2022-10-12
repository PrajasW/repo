#include <iostream>
using namespace std;

class Diet
{
private:
    int duration;
    int minIntakePerDay;
    int shoppingOnDay[101];
    int protienAtHome=0;
public:
    void planDiet();
    void verifyDiet();
};

void Diet::planDiet()
{
    cin>>duration>>minIntakePerDay;
    for (int i = 0; i < duration; i++)
    {
        shoppingOnDay[i];
    }
        
}
void Diet::verifyDiet()
{
    int day=-1;
    for (int i = 0; i < duration; i++)
    {
        protienAtHome += shoppingOnDay[i];
        if (protienAtHome < minIntakePerDay)
        {
            day = i+1;
        }
        protienAtHome -= minIntakePerDay;
    }
    if (day == -1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO "<<day<<endl;
    }
       
}
int main()
{
    int totalTests;
    cin>>totalTests;

    Diet testRun[totalTests];
    for (int i = 0; i < totalTests; i++)
    {
        testRun[i].planDiet();
    }
    for (int i = 0; i < totalTests; i++)
    {
        testRun[i].verifyDiet();
    }
    return 0;
}