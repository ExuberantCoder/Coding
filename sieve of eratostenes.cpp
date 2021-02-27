#include <iostream>
using namespace std;
void  primesieve(int *p,int n)
{
    p[0]=0;
    p[1]=0;
    p[2]=1;
    /// only odd no. are prime except 2 thats why we made p[2] equal to 1
 for(int i=3;i<=n;i+=2)
    {
        p[i]=1;
    }
    /// we treated all odd no. as prime and now we will cancel all the multiples of odd no.
    for(int i=3;i<=n;i+=2)
    {
        if(p[i])
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                p[j]=0;
            }
        }
    }

    return ;
}
int main()
{
    long long int N=1000;
    int p[N]={0};
    primesieve(p,100);
    for(int i=0;i<=100;i++)
    {
        if(p[i])
            {
            cout<<i<<" ";
        }
    }
    return 0;
}
