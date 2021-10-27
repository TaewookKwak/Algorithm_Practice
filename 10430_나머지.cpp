#include <iostream>
using namespace std;
int main()
{
	int A, B, C;
	cin >> A >> B >> C;
	if (2 <= A && 2 <= B && 2 <= C && 10000 >= A && 10000 >= B && 10000 >= C)
	{
		cout << (A + B) % C << endl;
		cout << ((A % C) + (B % C)) % C << endl; 
		cout << (A*B) % C << endl;
		cout << ((A % C) * (B % C)) % C << endl;
	}
	return 0;
}