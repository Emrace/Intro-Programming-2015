#include<iostream>
using namespace std;
int check(int a)
{
    if(a<0) a*=-1;
    return a;
}
int main()
{
    int n,a[20];
    cout<<"n= ";cin>>n;
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    }
    cout<<"f'(x) = ";
    for(int i=0;i<n;i++)
    {
        cout<<(n-i)*(check(a[i]));
        if(i!=n-2)
        {
           if(i!=n-1) cout<<"x^"<<n-i-1;
        }
        else cout<<"x";
        if(i!=n-1)
        {
            if(a[i+1]>=0)cout<<" + ";
            else cout<<" - ";
        }
    }
}
