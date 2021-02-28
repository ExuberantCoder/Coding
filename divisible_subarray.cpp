#include <iostream>
#include<cstring>
using namespace std;
#define ll long long
int main()
{
    ll a[100005],prefixsum[100005];
    int n;
    cin>>n;
    ll sum=0;

    memset(prefixsum,0,sizeof prefixsum);
    prefixsum[0]=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
       sum%=n;
      /// to find mod if there is negative no.
       sum=(sum+n)%n;
      ///update the frequency array
        prefixsum[sum]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        cout<<prefixsum[i]<<"  ";
        ll no=prefixsum[i];
      ///no. ways possible ways
        ans+=((no)*(no-1))/2;
    }
    cout<<endl<<ans;

}

