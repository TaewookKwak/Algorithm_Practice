#include<iostream>
using namespace std;
int main()
{
	double A, B;
	cin >> A >> B;
	if (0 < A && 10 > B)
	{
		cout.precision(12);
		cout << fixed;
		cout << A / B;
		return 0;
	}
}