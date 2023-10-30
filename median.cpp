#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

vector<int> merge(vector<int> a, vector<int> b)
{
	vector<int> temp;

	for (int i = 0; i < a.size(); i++)
		temp.push_back(a[i]);

	for (int j = 0; j < b.size(); j++)
		temp.push_back(b[j]);

	// sort(temp.begin(), temp.end());

	// return temp;

	vector<int> temp2;
	int start = 0;
	int end = temp.size() - 1;
	int mid = (start + end) / 2;
	int i = 0,j = mid + 1;

	while (i <= mid && j <= end)
	{
		if (temp[i] <= temp[j])
		{
			temp2.push_back(temp[i]);
			i++;
		}
		else
		{
			temp2.push_back(temp[j]);
			j++;
		}
	}

	while (i <= mid)
	{
		temp2.push_back(temp[i]);
		i++;
	}

	while (j <= end)
	{
		temp2.push_back(temp[j]);
		j++;
	}

	return temp2;
}

int main()
{
	vector<int> a{0,0,0,0,0};
	vector<int> b{-1,0,0,0,0,0,1};

	vector<int> d = merge(a, b);

	// for (auto i : d)
	// 	cout << i << " ";

	int n = d.size();
	double x = 0;
	if (n % 2 == 1)
	{
		x = d[n / 2];
	}
	else
	{
		x = (d[n / 2 - 1] + d[n / 2]) / 2.0;
	}

	cout << x;
}