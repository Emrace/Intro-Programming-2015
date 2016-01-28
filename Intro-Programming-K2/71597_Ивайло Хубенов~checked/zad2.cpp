#include<iostream>
#include<math.h>
using namespace std;
int numOfDigits(int a)
{
    int counter=0;
    while(a!=0)
    {
        counter++;
        a/=10;
    }
    return counter;
}


bool check(int a, int b, int n)
{
    int number=1;
    for(int i=0;i<n;i++)
    {
        number*=10;
    }
    if(a==0) return 0;
    if(b == (a%number) )
    {
        return 1;
    }
    else return check(a/10,b,n);
}
int main()
{
    int a, b, n;
    cin>>a;
    cin>>b;
    n = numOfDigits(b);
    if(check(a,b,n)) cout<<"sudurja se";
    else cout<<"ne se sudurja";
}
