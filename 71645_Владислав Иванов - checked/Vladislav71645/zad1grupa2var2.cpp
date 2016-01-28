#include<cstdio>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    for(int i=2; i<=sqrt(n)+1; i++)
        if(n%i==0) return false;

    return true;
}

int pow2(int n)
{
    int br=0;
    while(n%2==0)
    {
        n=n/2;
        br+=1;
    }
    return br;
}

int sumOdd(int n)
{
    int sum=0;
    n-=2;
    while (n>0)
    {
        sum+=n;
        n-=2;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d", &n);
    if(n%2==0) printf("%d\n", pow2(n));
    if(isPrime(n)== true) printf("%d\n", sumOdd(n));
    return 0;
}
