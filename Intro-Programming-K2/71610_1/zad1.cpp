#include<iostream>
#include<cstring>
using namespace std;
//��������� ����� ��� �
void groups(char a[100])
{
	//����� ����� �������������� ������� � �
	int ngroups = 0;
	//������ �����
	char groups[100][100];
	//����� �� �������� ��� ����� ������ �����
	int len[50];
	//������ ����������� �� ����� �����
	double avg[50];
	//����� �� �������� ����� ������� � �������
	int br = 0;
	//�������� �� ������� �������
	if (a[1] > a[0])
	{
		groups[br][0] = a[0];
		br++;
	}
	for (int i = 1; i < strlen(a); i++)
	{

		//������� �������� ��� ������� ��
		groups[br][ngroups] = a[i];
		br++;
		//��� ���������� ������ ���� �� � �� ������� � ������������
		if (a[i] >= a[i + 1] && a[i] > a[i - 1])
		{
			len[ngroups] = br;
			ngroups++;
			br = 0;
		}
	}
	//��������� ����� �� ������� �����
	cout << ngroups << " correct alphabetical groups" << endl;
	for (int i = 0; i < ngroups; i++)
	{
		//�������� ������ ������������� �� ����� �����
		avg[i] = 0;
		for (int j = 0; j < len[i]; j++)
		{
			cout << groups[j][i];
			avg[i] += groups[j][i];
		}
		avg[i] /= len[i];
		//�������� ������ �����������
		cout << " " << avg[i] << endl;
	}
}
int main()
{
	//���
	char word[100];
	//��������� �����
	cout << "enter a word: ";
	cin >> word;
	//��������� �������� ����������� �� ����� �����
	groups(word);
	system("pause");
	return 0;
}

// 0.0/0.0