#include<iostream>

using namespace std;
void PrintFun(int* _selfNumArr, int _sizeOfselfNum)
{
	for (int i = 0; i < _sizeOfselfNum; i++)
	{
		if (!_selfNumArr[i])
			cout << i << "\n";
	}
}
void SelfNumFun(int _maxNum)
{
	int selfNum[10000] = {};
	for (int n = 0; n < _maxNum; n++)
	{
		if (n < 10)
			selfNum[n + n] = 1;
		else if (n < 100)
			selfNum[n + (n % 10) + (n / 10)] = 1;
		else if (n < 1000)
			selfNum[n + (n % 10) + ((n / 10) % 10) + ((n / 10) / 10)] = 1;
		else if (n < 10000)
		{
			int temp = n + (n % 10) + ((n / 10) % 10) + (((n / 10) / 10) % 10) + (((n / 10) / 10) / 10);
			if (temp < 10000)
				selfNum[temp] = 1;
		}
	}
	PrintFun(selfNum, _maxNum);
}

int main()
{
	//cout << "한자리" << n + n
	/*cout << "두자리" << n + (n % 10) + (n / 10) << endl; // 2자리 : 33
	cout << "세자리" << n + (n % 10) + ((n / 10) % 10) + ((n / 10) / 10) << endl; // 3자리 : 222 = 222 + 2 + 2 + 2
	cout << "네자리" << n + (n % 10) + ((n / 10) % 10) + (((n / 10) / 10) % 10) + (((n / 10) / 10) / 10) << endl;// 4자리 : 1234 = 1234 + 1 + 2 + 3 + 4*/
	SelfNumFun(10000);
	
	return 0;
}