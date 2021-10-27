#include<iostream>
using namespace std;
int main()
{
	int intArr[9] = {};
	int intMax = 0;
	int intCount = 1;
	int intMaxCount;
	for (int i = 0; i < 9; i++)
	{
		cin >> intArr[i];
		if (intMax < intArr[i])
		{
			intMax = intArr[i];
			intMaxCount = intCount;
		}
		intCount++;
		
	}
	cout << intMax << "\n" << intMaxCount;

	return 0;
}