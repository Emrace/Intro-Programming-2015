#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int arr[100];

    for( int i=1; i<=n+1; i++ )
    {
        scanf("%d", &arr[i]);
    }

    printf("f'(x) = ");
    printf("%d%c^%d", (arr[1]*(n)), 'x', (n-1));

    for( int i=2; i<n; i++ )
    {
        if(arr[i]*(n-i+1)<=0)
        printf("%d%c^%d", (arr[i]*(n-i+1)), 'x', (n-i));
        else
        printf("+%d%c^%d", (arr[i]*(n-i+1)), 'x', (n-i));
    }

    if(arr[n]<0)
    printf("%d", arr[n]);
    else printf("+%d", arr[n]);
    return 0;
}

/*
9
10 9 -8 7 -6 5 4 3 -2 1
*/
