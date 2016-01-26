#include<iostream>
using namespace std;
bool isDigit(char a)
{
    if(a<'0' || a>'9') return 0;
    return 1;
}

bool isSymbol(char a)
{
    if( (a!=' ') && (a!='*') && (a!='/') && (a!='+') && (a!='-') && (a!='(') && (a!=')') )
        return 0;
    return 1;
}

bool check(char a[])
{
    int i=0;
    while(a[i]!=NULL)
    {
        if(a[i] == ' ')
        {
            if ( isDigit(a[i-1]) && isDigit(a[i+1]) ) {return 0; }
            if ( isSymbol(a[i-1]) && isSymbol(a[i+1]) ) {return 0; }
        }
        i++;
    }
    return 1;
}

bool brackets(char a[])
{
    bool f=0;
    int br1=0,br2=0;
    int i=0;
    while(a[i]!=NULL)
    {
        if(a[i]=='(')
        {
            if(a[i-1]!=' ')
                if(isDigit(a[i-1])) return 0; else;
            else
            {
                if(isDigit(a[i-2])) return 0;
            }
            if(a[i+1]!=' ')
                if(isSymbol(a[i+1])) return 0; else;
            else
            {
                if(isSymbol(a[i+2])) return 0;
            }
            f=1;
            br1++;
        }
        if(a[i]==')')
        {
            if(f==0) return 0;
            if(a[i+1]==' ')
                if(isDigit(a[i+1])) return 0; else;
            else
            {
                if(isDigit(a[i+2])) return 0;
            }
            if(a[i-1]==' ')
                if(isSymbol(a[i-1])) return 0; else;
            else
            {
                if(isSymbol(a[i-2])) return 0;
            }
            br2++;
            f=0;
        }
        i++;
    }
    if(br1!=br2) return 0;
    return 1;
}

bool isValid(char a[])
{
    bool digit = 0;
    int i=0;
    if(isSymbol(a[0]) && (a[0]!='(') && (a[0]!=')') ) return 0;
    if(check(a)==0)return 0;
    while(a[i]!=NULL)
    {
        if(isDigit(a[i])==0 && isSymbol(a[i])==0) return 0;
        i++;
    }
    //if(brackets(a)==0) return 0;

    if(isSymbol(a[i-1]) && (a[i-1]!='(') && (a[i-1]!=')') ) return 0;
    return 1;

}
int main()
{
    char a[100];
    cin.getline(a,100,'\n');
    if(isValid(a))cout<<"validen e";
    else cout<<"ne e validen";
}
