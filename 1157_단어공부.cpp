#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	int arr[28] = {0,};
	int maxCounter = 0;
	int index = 0;
	int doubleMaxCounter= 0;
	// 문자열의 영문자들을 대문자로 바꿈
	cin >> str;
	for (int i = 0; i < str.length(); i++)
	{
		if ('a' <= str[i] && 'z' >= str[i])
		{
			str[i] = str[i] - 32;
		}
	}
	// 문자열의 첫번째 문자 부터 시작하여 영문자를 인식하고 그에 상응하는 배열의 번째를 1 상승 시킴
	for (int i = 0; i < str.length(); i++)
	{
		arr[str[i] - 'A']++;
	}
	// 촤대 빈도수를 구함
	for (int i = 0; i < 28; i++)
	{
		if (arr[i] >= maxCounter)
		{
			maxCounter = arr[i];
			index = i;
		}
	}
	// 최대 빈도수가 2번 이상이면 ? 출력
	for (int i = 0; i < 28; i++)
	{
		if (arr[i] == maxCounter)
			doubleMaxCounter++;
	}
	if (doubleMaxCounter >= 2)
		cout << "?";
	else
		cout << (char)(index + 'A');
	// 아니면 그 문자를 출력(그에 상응하는 배열의 번째를 출력)

	

	return 0;
}