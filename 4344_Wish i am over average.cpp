#include <iostream>

using namespace std;

int main()
{
	int TestCase, StudentNum;
	int EchAvg[1000] = {};
	float Avg = 0;
	float Ptg = 0;

	cin >> TestCase;

	for (int i = 0; i < TestCase; i++)
	{
		cin >> StudentNum;
		Avg = 0;
		Ptg = 0;
		for (int j = 0; j < StudentNum; j++)
		{
			cin >> EchAvg[j];
			Avg += EchAvg[j];
		}
		Avg = Avg / StudentNum;
		for (int j = 0; j < StudentNum; j++)
		{
			if (EchAvg[j] > Avg)
			{
				Ptg++;
			}
		}
		Ptg = Ptg / (float)StudentNum * 100;
		cout << fixed;
		cout.precision(3);
		cout << Ptg << "%\n";

	}
	return 0;
}