#include<iostream>
#include<cstring>
using namespace std;
//функцията взема низ а
void groups(char a[100])
{
	//броят групи последователни символи в а
	int ngroups = 0;
	//самите групи
	char groups[100][100];
	//броят на елементи във всяка такава група
	int len[50];
	//средно аритметично на всяка група
	double avg[50];
	//брояч за символът който гледаме в момента
	int br = 0;
	//проверка за първият елемент
	if (a[1] > a[0])
	{
		groups[br][0] = a[0];
		br++;
	}
	for (int i = 1; i < strlen(a); i++)
	{

		//добаяме символът към групата му
		groups[br][ngroups] = a[i];
		br++;
		//ако следващият символ вече не е от групата я рестартираме
		if (a[i] >= a[i + 1] && a[i] > a[i - 1])
		{
			len[ngroups] = br;
			ngroups++;
			br = 0;
		}
	}
	//извеждаме броят на поредни групи
	cout << ngroups << " correct alphabetical groups" << endl;
	for (int i = 0; i < ngroups; i++)
	{
		//намираме средно аритметичното на всяка група
		avg[i] = 0;
		for (int j = 0; j < len[i]; j++)
		{
			cout << groups[j][i];
			avg[i] += groups[j][i];
		}
		avg[i] /= len[i];
		//изжедаме средно аритметично
		cout << " " << avg[i] << endl;
	}
}
int main()
{
	//низ
	char word[100];
	//въвеждаме низът
	cout << "enter a word: ";
	cin >> word;
	//извеждаме средното аритметично на всяка група
	groups(word);
	system("pause");
	return 0;
}

// 0.0/0.0