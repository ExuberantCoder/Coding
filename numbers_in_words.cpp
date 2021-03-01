#include<bits/stdc++.h>
using namespace std;
#define ll long long
void inwords(ll n)
{

    string spellings[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    if(n==0)
    {
        return;
    }
    inwords(n/10);
    cout<<spellings[n%10]<<" ";

}

int main()
{
    ll n;
    cin>>n;
    inwords(n);
    return 0;
}
