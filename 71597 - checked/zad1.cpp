#include<iostream>
#include<cmath>
using namespace std;
int fib(int a)
{
    int x1=1,x2=1;
    for(int i=0;i<(a-1)/2;i++)
    {
        x1=x1+x2;
        x2=x1+x2;
    }
    if(a%2==1) return x1;
    if(a%2==0) return x2;
}
bool prosto(int a)
{
    int n = (int)sqrt(a);
    for(int i=2;i<=n;i++)
    {
        if(a%i==0) return 0;
    }
    return 1;
}
int triug(int a)
{
    int sum=0;
        for(int i=1;i<=a;i++)
        {
            sum+=i;
        }
        return sum;
}
int main()
{
    int a;
    do
    {
        cout<<"a= ";
        cin>>a;
    }while(a<7 || a>39);
    if( (pow(a,pow(3,-1))) == ((int)pow(a,pow(3,-1)))+1 )
    {

        cout<<"sum= "<<triug(a)<<endl;
    }
    if(prosto(a)) cout<<"fib= "<<fib(a);

}
