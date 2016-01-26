#include<iostream>
#include<string.h>
using namespace std;
void lowerCase(char a[])
{
    int i=0;
    while(a[i]!=NULL)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            a[i] = a[i] + ('a' - 'A');
        }
        i++;
    };
}
double counter(char a[])
{
    int count = 1;
    int i=1;
    while(a[i]!=NULL)
    {
        if(a[i] != (a[i-1] + 1))
        {
            count++;
        }
        i++;
    };
    return ((double)i/(double)count);
}
int main()
{
    char a[100];
    cin>>a;
    lowerCase(a);
    cout<<counter(a);
}
