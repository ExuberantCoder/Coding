#include<iostream>
using namespace std;
bool issorted(int *a,int n)
{
    if(n==1)
    {
        return true;
    }
    if(a[0]<a[1] && issorted(a+1,n-1))
    {
        return true;
    }
    return false;
}
int main()
{
    int a[]={1,2,3,4,5,6,9,11,25};
    int n=sizeof (a)/sizeof (int);
    if(issorted(a,n))
    {
        cout<<"yes it is sorted";
    }
    else
    {
        cout<<"Not sorted";
    }

}
