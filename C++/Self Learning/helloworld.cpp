#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{

    int i=0;
    while(i>-1)
    {
       cout<<rand()%2;
       i++;
       if(i%100000 == 0)
       {
 	    getchar();
       }
    }
    return 0;
}
