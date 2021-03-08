#include<bits/stdc++.h>
using namespace std;
void shuffle(int *a,int s,int e)
{
     srand(time(NULL));
     int j=0;
     for(int i=0;i<e;i++)
     {
         j=rand()%(e+1);
         swap(a[i],a[j]);
     }
}
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    shuffle(a,0,n-1);
    for(int i=0;i<=n-1;i++)
     {
        cout<<a[i]<<" ";
     }
    return 0;
}
