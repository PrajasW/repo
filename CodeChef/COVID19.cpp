#include <iostream>
using namespace std;

template <class data_type>
data_type mod(data_type &a)
{
    if (a >= 0)
    {
        return a;
    }
    else
    {
        return -a;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x[n];
        for (int i = 0; i < n; i++)
        {
            cin>>x[i];
        }
        int dist[n-1];
        for (int i = 0; i < n-1; i++)
        {
            dist[i] = x[i+1] - x[i];
        }
        int infected;
        int min = n;
        int max = 1;
        for (int i = 0; i < n-1; i++)
        {
            infected = 1;
            while (mod((dist[i])) <= 2)
            {
                infected++;
                i++;
                if (i == n-1)
                {
                    break;
                }
            }
            if (infected > max)
            {
                max = infected;
            }
            if (infected < min)
            {
                min = infected;
            }
        }
        cout<<min<<" "<<max<<endl;
    }
    return 0;
}