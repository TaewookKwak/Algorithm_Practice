#include<iostream>
using namespace std;
int main()
{
	int A, B, C;
	int multResult;
	int intArr[10] = { 0 };

	cin >> A >> B >> C;
	multResult = A * B * C;
	
	while (multResult != 0)
	{
		intArr[multResult % 10]++;
		multResult /= 10;
	}

	for (int v : intArr)
	{
		cout << v << "\n";
	}
	return 0;
	//A*B*C= 결과를 안다
	//
	//INT 배열에 그 값을 넣는다.
	//

}