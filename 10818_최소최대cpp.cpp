#include<iostream>
#include <algorithm>

using namespace std;
int main()
{
	
	int N;
	cin >> N;
	int min = 1000000;
	int max = -1000000;
	int* intArr = new int[N];

	if (1 <= N && 1000000 >= N)
	{
		for (int i = 0; i < N; i++)
		{
			cin >> intArr[i];
			if (intArr[i] > max) //5 7 3 10
				max = intArr[i]; //5 7   10

			if (intArr[i] < min) //5 7 3 10
				min = intArr[i]; //5   3 3
		}


		cout << min << " " << max;

	}

	return 0;

}