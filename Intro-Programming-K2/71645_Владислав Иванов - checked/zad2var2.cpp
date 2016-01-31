#include<iostream>
#include<cstdio>

using namespace std;

//funny name, but no
bool isItThere(int number, int digit)
{
    if(!number) return false;
    if(number%10 == digit) return true;
    else return isItThere(number/10, digit);
    return false; //code won't be reached
}



int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    if(n==0 && k==0) printf("true");
    else if(isItThere(n,k)) printf("true");
    else printf("false");

    return 0;
}

// 1.0/1.0