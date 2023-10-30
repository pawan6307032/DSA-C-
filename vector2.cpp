#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int>a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
	a.push_back(50);
	
	int end = a.size() - 1;
	cout << a[end];
	return 0;
}
