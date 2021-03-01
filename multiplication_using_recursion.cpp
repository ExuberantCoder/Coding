#include<bits/stdc++.h>
using namespace std;
int mul(int a, int b)
{
    if(b==0)
    {
        return 0;
    }
    int ans=a+mul(a,b-1);
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<mul(a,b);
    return 0;
}
