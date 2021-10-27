#include<iostream>
using namespace std;
int main()
{
	int A;
	int firstInt;
	int secondInt;
	int result;
	int countCycle = 0;
	cin >> A;
	if (0 <= A && 99 >= A)
	{
		if (10 > A)
		{
			A *= 10;
		}
		firstInt = A / 10;
		secondInt = A % 10;
		while (true)
		{
			result = firstInt + secondInt;
			if (10 <= result)
			{
				firstInt = secondInt;
				secondInt = result % 10;
			}
			else
			{
				firstInt = secondInt;
				secondInt = result;
			}
			result = (firstInt * 10) + (secondInt);
			++countCycle;
			if (result == A)
			{
				break;
			}
		}
		cout << countCycle;
	}
	return 0;
}