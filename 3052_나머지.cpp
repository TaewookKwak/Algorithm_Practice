#include <iostream>
#define Divider 42;
using namespace std;
int main()
{
	int input, count = 0;
	int arr[42] = { 0 };
	
	for (int i = 0; i < 10; i++)
	{
		cin >> input;
		if (!arr[input % 42]++)
		{
			count++;
		}
	}
	cout << count++;
	return 0;


}