#include<iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	if (1000000 >= N)
	{
		for (int i = N; i >= 1; i--)
		{
			cout << i << "\n";
		}
	}
	return 0;
}