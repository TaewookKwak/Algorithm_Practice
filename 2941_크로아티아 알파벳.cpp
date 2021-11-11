#include<iostream>
using namespace std;
#include<string>
#include<vector>

int main()
{
	vector<string> sixalphabet = {"c=","c-","dz=","d-","lj","nj","s=","z="};
	string words = { };
	int count = 0;
	int index;
	cin >> words;
	for (int i = 0; i < sixalphabet.size(); i++)
	{
		while (1)
		{
			index = words.find(sixalphabet[i]);
			if (index == string::npos)
				break;
			words.replace(index, sixalphabet[i].length(), "#");
		}
	}
	cout << words.length();
	return 0;
}