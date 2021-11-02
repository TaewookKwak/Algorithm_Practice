#include <iostream>	
#include <string>
using namespace std;

int main()
{
	
	//테스트 케이스 개수 설정
	int TestCase, Count_O = 0, TotalCount_O = 0;
	string str_OX;
	//테스트 케이스 개수 받기
	cin >> TestCase;
	//반복문 I < 테스트 케이스
	for (int i = 0; i < TestCase; i++)
	{
		cin >> str_OX;
		TotalCount_O = Count_O = 0;
		for (int j = 0; j < str_OX.length(); j++)
		{
			if (str_OX[j] == 'O')
			{
				Count_O++;
				TotalCount_O += Count_O;
			}
			else if (str_OX[j] == 'X')
			{
				Count_O = 0;
			}
		}
		cout << TotalCount_O << "\n";
		//O일 경우 COUNT 변수에 += 1

		//X일 경우 TOTALCOUNT 변수에 COUNT 값을 복사
		//COUNT 변수에 =0
	
		//TOTALCOUNT 출력
	}
	
	return 0;
}