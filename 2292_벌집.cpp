#include<iostream>
using namespace std;

int main()
{
	//15
	//	6 12 18 24
	//	(6 * 1) (6 * 2) (6 * 3)
	//	1 ~7 ~19 ~37
	//	2   3    4
	//	for (int i = 1; value > (6 * i + 1) && value <= (6 * [i + 1] + 1)
	//	{

	//	}
	int value;
	cin >> value;
	int num_passed_room;
	int i = 1;
	while (true)
	{
		if ((value > (6 * i + 1)) && (value <= (6 * (i + 2) + 1)))
		{
			num_passed_room = i + 2;
			break;
		}
		i+=2;
	}
	cout << num_passed_room;
	

}