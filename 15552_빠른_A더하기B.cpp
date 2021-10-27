#include<iostream>
using namespace std;
int main()
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int A, B, T;
	cin >> T;
	if (T <= 1000000)
	{
		for (int i = 0; i < T; i++)
		{
			cin >> A >> B;
			if (1 <= A && 1 <= B && 1000 >= A && 1000 >= B)
			{
				cout << A + B << "\n";
			}
		}
	}
	return 0;
}