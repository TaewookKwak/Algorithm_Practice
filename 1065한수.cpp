#include<iostream>
using namespace std;

int HansooFuc(int _hansoo)
{
	int hansooCount = 0;
	if (1 <= _hansoo && 1000 >= _hansoo)
	{
		for (int i = 1; i <= _hansoo; i++)
		{
			if (i < 100)
				hansooCount++;
			else if (i < 1000)
			{
				int ones = i % 10;
				int tenths = ((i / 10) % 10);
				int hundreds = ((i / 10) / 10) % 10;
				int thousands = ((i / 10) / 10) / 10;

				if ((tenths - hundreds) == (ones - tenths))
					hansooCount++;
			}
		}
	}
	return hansooCount;
}

int main()
{
	int hansoo;
	cin >> hansoo;
	int count = HansooFuc(hansoo);
	cout << count;
	return 0;
}