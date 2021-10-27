#include<iostream>
using namespace std;
int main()
{
	int A, B, T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> A >> B;
		if (0 < A && 10 > B)
		{
			cout << A + B << endl;
		}
	}

	return 0;
}