#include<iostream>
using namespace std;

int main()
{
	int subject;
	float totalScore = 0;
	int maxScore = 0;
	int score[1000] = {};
	cin >> subject;
	for (int i = 0; i < subject; i++)
	{
		cin >> score[i];
		if (maxScore < score[i])
		{
			maxScore = score[i];
		}
		totalScore += score[i];
	}
	cout << fixed;
	cout.precision(6); 
	cout << (totalScore / maxScore * 100) / subject;
}