#include<iostream>
using namespace std;

int main()
{
	int N, X, inPut;
	cin >> N >> X;
	
	if (1 <= N && 10000 >= X)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> inPut;
			if (X > inPut)
			{
				cout << inPut << " ";
			}
		}
	}
	return 0;
}