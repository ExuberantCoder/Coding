#include<bits/stdc++.h>
using namespace std;
void mergee(int *a,int s,int e)
{
    int mid=(s+e)/2;
    int temp[100];
    int i=s;
    int j=mid+1;
    int k=s;
    while(i<=mid && j<=e)
    {
        if(a[i]<a[j])
        {
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
        }
    }
    while(i<=mid)
    {
        temp[k++]=a[i++];
    }
    while(j<=e)
    {
        temp[k++]=a[j++];
    }

      for(int i=0;i<=e;i++)
      {
          a[i]=temp[i];
      }

}
void mergesort(int *a,int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int mid=(s+e)/2;
    mergesort(a,s,mid);
    mergesort(a,mid+1,e);

    mergee(a,s,e);

}
int main()
{
    int a[]={2,3,1,8,4,5,77,11};
    int n=sizeof (a)/sizeof (int);
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
