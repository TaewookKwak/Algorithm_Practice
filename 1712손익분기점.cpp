#include<iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	int break_even_point = 0;
	if (A <= 2100000000 && B <= 2100000000 && C <= 2100000000)
	{
		if (B <= C)
		{
			break_even_point = A / (C - B) + 1;
			cout << break_even_point;
		}
		else
		{
			cout << "-1";
		}
	}
	
	return 0;
}