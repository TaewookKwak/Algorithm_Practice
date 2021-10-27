#include<iostream>
using namespace std;

int main()
{
	int A, B;
	int Out1, Out2, Out3;
	cin >> A >> B;
	Out1 = A * ((B % 100) % 10);
	Out2 = A * ((B % 100) / 10);
	Out3 = A * (B / 100);
	cout << Out1 << endl;
	cout << Out2 << endl;
	cout << Out3 << endl;
	cout << A * B;
	return 0;

}