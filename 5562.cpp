#include<iostream>
#include<string>
using namespace std;
int main()
{
	int dialNumberArr[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	int sum = 0;
	string dialWords;
	cin >> dialWords;
	
	for (int i = 0; i < dialWords.length(); i++)
	{
		sum += dialNumberArr[dialWords[i] - 65];
	}
	cout << sum;
	
}