#include<iostream>
using namespace std;

int main()
{
	int N;
	char str[100] = {};
	int total = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> str[i];
		total = total + (str[i] - 48);
	}
	cout << total;
	return 0;
}