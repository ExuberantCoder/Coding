#include<iostream>
#include<cstring>
using namespace std;
void extractstr(char *a,int i)
{
    int n=0;

    while(i>0)
    {

        (i&1)?cout<<a[n] : cout<<"";
        n++;
        i=i>>1;
    }
    cout << endl;
}
void stringlength(char *a)
{
    int l=strlen(a);
    int n=(1<<l)-1;
    for(int i=0;i<=n;i++)
    {
        extractstr(a,i);
    }
}

int main()
{
    char a[100];
    cin>>a;
    stringlength(a);
    return 0;

}
