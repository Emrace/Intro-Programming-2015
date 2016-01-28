#include<cstdio>
#include<cmath>

using namespace std;

int a[10][10];

void initArr()
{
    int k=1;
    for(int i=0; i<10; i++)
    for(int j=0; j<10; j++)
    {
        a[i][j]=k;
        k++;
    }
}

int main()
{

    int x,y,r;
    scanf("%d%d%d", &x, &y, &r);
    initArr();
    int sum=0;
    for(int i=0; i<10; i++)
    for(int j=0; j<10; j++)
    {
        int l=x-i;
        int k=y-j;

        if(l*l + k*k <= r*r)
            {
                //a[i][j]=0;
                continue;
            }
        else sum+=a[i][j];
    }

    printf("%d\n", sum);

    /*for(int i=0; i<10; i++)
    {for(int j=0; j<10; j++)
        printf("%d ", a[i][j]);
        printf("\n");
    }
    */

    return 0;
}
