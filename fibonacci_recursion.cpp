#include<iostream>
using namespace std;
int fibo(int a)
{
    if(a==0 || a==1)
    {
        return a;
    }
    int f1=fibo(a-1);
    int f2=fibo(a-2);
    return f1+f2;

}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}
