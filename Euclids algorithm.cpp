#include <iostream>
using namespace std;
int euclid(int a, int b)
{
    ///base case
    if(b==0)
    {
        return a;
    }
    ///Recursive
    euclid(b,a%b);
}
int lcm(int a,int b)
{
    ///LCM = (A*B)/GCD
    return (a*b)/euclid(a,b) ;
}
int main()
{
    cout<<euclid (10,15)<<endl;
     cout<<euclid (10,14)<<endl;

     cout<<lcm (10,15)<<endl;
     cout<<lcm(10,14)<<endl;
}
