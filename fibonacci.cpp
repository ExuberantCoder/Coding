#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c=a+b;
    int n;
    cin>>n;
    int i=3;
    if (n==1){
        cout<<a;
    }
    else if(n==2){

    cout<<"0 , 1";
    }
    else if(n>2)
    {
        cout<<"0 , 1 ,";
        while (i<=n)
        {
            cout<<c<<", ";
            a=b;
            b=c;
            c=a+b;
            i=i+1;
        }

    }
    else{
        cout<<"invalid term ";
    }
    return 0;


}
