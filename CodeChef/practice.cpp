#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int x[n];
        for (int i = 0; i < n; i++)
        {
            cin>>x[i];
        }
        int y[n-1]; //stores the distances between the peoples
        for (int i = 0; i < n-1; i++)
        {
            y[i] = x[i+1] - x[i];
        }
        int count = 1;
        int max=1;
        int min=n;
        for (int i = 0; i < n-1; i++)
        {
            count = 1;
            while (y[i] <= 2)
            {
                count++;
                i++;
            }
            if (count > max)
            {
                max = count;
            }
            if (count < min)
            {
                min = count;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}