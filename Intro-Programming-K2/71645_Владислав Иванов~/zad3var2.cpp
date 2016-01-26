#include<iostream>
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
queue <char>q;


bool isNumber(char c)
{
    if(c>='0' && c<='9') return true;
    return false;

}

bool isOperation(char c)
{
    if(c=='*' || c=='/' || c=='+' || c=='-') return true;
    return false;
}


bool ffff(char* s)
{
        char c;
        bool next=false;
        char last;
        c=q.front();
        q.pop();
        if(isOperation(c)) return false;
        last=c;
    while(!q.empty())
        {
            c=q.front();
            q.pop();
            if(c==' ' && isNumber(last)==false) {continue;}
            if(isNumber(last)==true)
            {
                while(isNumber(c)==true && !q.empty())
                {
                    c=q.front();
                    if(c==' ') return false;
                    last=c;
                    if(isNumber(c)==true) {q.pop();}
                    else break;
                }
                last=c;
            }

            else if(isOperation(c)==true) {q.pop(); if(isOperation(q.front())==true){q.pop(); return false;} else continue;}



}
return true;
}

int main()
{
    char s[120];
    cin>>s;
    for(int i=0;i<strlen(s);i++)
        /*if(s[i]!=' ')*/ q.push(s[i]);
    for(int i=0;i<strlen(s);i++)
    {
        if(isNumber(s[i])== false && isOperation(s[i])) {cout<<"false";return 0;}
    }
    if(isOperation(s[strlen(s)-1])) {cout<<"false";return 0;}
    if(ffff(s))
    cout<<"true"<<endl;
    else cout<<"false"<<endl;



    return 0;
}

