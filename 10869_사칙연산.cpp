#include <iostream>
using namespace std;
int main()
{
	int A, B;
	cin >> A >> B;
	if (1 <= A && 10000 >= B)
	{
		cout << A + B << endl;
		cout << A - B << endl;
		cout << A * B << endl;
		cout << A / B << endl;
		cout << A % B;
	}
	return 0;
}