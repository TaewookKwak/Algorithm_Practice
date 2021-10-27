#include <iostream>
using namespace std;
int main()
{
	int N;
	cin >> N;
	if (1 <= N && 9 >= N)
	{
		for (int i = 1; i < 10; i++)
		{
			//printf("%d * %d = %d\n", N, i, (N * i));
			cout << N << " * " << i << " = " << N * i << endl;
		}
	}
	return 0;
}