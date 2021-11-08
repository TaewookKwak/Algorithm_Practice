#include<iostream>
using namespace std;
#include<string.h>

int main()
{
	int testCase;
	int repeatingNumber;
	char testStr[170];
	
	cin >> testCase;
	if (1 <= testCase && 1000 >= testCase)
	{
		for (int i = 0; i < testCase; i++)
		{
			cin >> repeatingNumber >> testStr;
			int len = (int)strlen(testStr);
			if (1 <= repeatingNumber && 8 >= repeatingNumber && 1 <= len && len <= 20)
			{
				for (int j = 0; j < len; j++)
				{
					for (int k = 0; k < repeatingNumber; k++)
						cout << testStr[j];
				}
				cout << "\n";
			}
		}
	}
	
	return 0;
}