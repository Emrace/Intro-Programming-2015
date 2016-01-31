#include<iostream>
using namespace std;
//ôóíêöèÿòà êîÿòî ïðîâåðÿâà äàëè ÷èñëîòî à ñúäúðæà öèôðà á
bool contains(int a, int b)
{
	//êîïèå íà à
	int c = a;
	//áðîé íà öèôðèòå â à
	int br = 0;
	//íàìèðàìå áðîÿò íà öèôðè â à
	do
	{
		c /= 10;
		br++;
	} while (abs(c) > 0);
	//ïúðâàòà öèôðà îò à
	int first = a / (int)pow(10, br - 1);
	//àêî å ðàâíà íà á, çíà÷è ñå á ñå ñúäúðæà â à
	if (first == b)
	{
		return true;
	}
	else
		if (abs(a) > 0)
			//ðåêóðñèÿ äîêàòî à íå ñòàíå åäíîöèôðåíî ÷èñëî
			return contains(a - first*(int)pow(10, br - 1), b);
	//àêî à ñòàíå åäíîöèôðåíî ÷èñëî, è íå ñúäúðæà á, âðúùàìå false 
	return false;
}
int main()
{//âúâåæäàìå à è á
	int a, b;
	cin >> a >> b;
	//ïðîâåðêà äàëè á ñå ñúäúðæà â à
	if (contains(a, b) == true)
		cout << a << " contains " << b << endl;
	else
		cout << a << " does not contain " << b << endl;
	system("pause");
	return 0;
}

// 1.0/1.0