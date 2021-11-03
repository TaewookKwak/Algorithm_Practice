#include<iostream>
#include <vector>
using namespace std;
long long sum(vector<int>& a)
{
	int Vsum = 0;
	for (int i = 0; i < a.size(); i++)
	{
		Vsum += a[i];
	}
	return Vsum;
}
int main()
{
	int n;
	vector<int> a(3000000);
	long long result;
	cin >> n;
	if (1 <= n && 3000000 >= n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
	}
	result = sum(a);
	cout << result;
	return 0;
}