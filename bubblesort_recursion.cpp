#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *a,int i,int n)
{
    if(n==1)
    {
        return;
    }
    if(i==n-1)
    {
        return bubblesort(a,0,n-1);

    }
    if((a[i]>a[i+1]))
    {
        swap(a[i],a[i+1]);
    }
    bubblesort(a,i+1,n);




}
int main()
{
    int a[]={111,55,23,5,29,11};
    int n=sizeof (a)/sizeof (int);
    bubblesort(a,0,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<< " ";
    }

}
