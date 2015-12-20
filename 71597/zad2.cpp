#include<iostream>
#include<cmath>
using namespace std;
bool check(int x0, int y0, int i, int j, int r)
{
    if((pow((x0-i),2)+pow((y0-j),2))<=r*r) return 1;
    else return 0;
}
int main()
{
    int a[10][10],sum=0;
    int r;
    int x0,y0;
    cout<<"x0= ";
    cin>>x0;
    cout<<"y0= ";
    cin>>y0;
    cout<<"r= ";
    cin>>r;
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            a[i][j]=i*10+j+1;
            if(check(x0,y0,i,j,r)) sum+=a[i][j];
        }
    }
    cout<<sum;
}
