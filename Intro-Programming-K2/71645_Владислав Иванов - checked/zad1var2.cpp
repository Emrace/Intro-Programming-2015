#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

char asd[120];

bool fff(char* asd){
    return true;
}

//you should've used char* and a function
int main()
{
	string s;
	getline(cin, s, '\n');
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')  s[i] -= ('a' - 'A');
	}

	double br=0;
	double sum=0;
	int e=1;
	int i=1;
	while(i<=s.size())

    {
        if(s[i-1]-s[i]==1) e++;
        else {
           sum+=e;
           e=1;
           br++;
        }
        i++;
    }

    cout<<(double)sum/br<<endl;

	return 0;
}

//cbagfqgfe

// 1.7
