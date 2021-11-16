#include<iostream>
using namespace std;
#include<vector>
int check(string _str)
{
	//aaabbbccc
	int count = 0;
	int string_length = _str.size();
	for (int i = 0; i < string_length; i++)
	{
		if (_str[i] != _str[i + 1])
		{
			for (int j = i + 2; j < string_length; j++)
			{
				if (_str[j] == _str[i])
				{
					return 0;
				}
			}
		}
	}
	return ++count;
}
int main()
{
	int count = 0;
	string str;
	int testcase;
	cin >> testcase;
	for (int i = 0; i < testcase; i++)
	{
		cin >> str;
		count += check(str);
	}
	cout << count;
	return 0;
}