#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void subString(string &str, string &str2)
{
	int found = str.find(str2);
	if (found != string::npos)
	{
		string left = str.substr(0, found);
		string right = str.substr(found + str2.length(), str.size());
		str = left + right;

		subString(str, str2);
	}
	else
		return;
}

int main()
{
	string str = "axxxxyyyyb";
	string str2 = "xy";
	subString(str, str2);
	cout << str;
	return 0;
}