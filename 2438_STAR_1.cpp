#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	if (1 <= N && 100 >= N)
	{
		for (int i = 1; i <= N; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
	}
	return 0;
}