#include <iostream>
using namespace std;

int sumBitDifferences(int arr[], int n)
{
    int ans = 0;
	for (int i = 0; i < 16; i++) {
		int count = 0;
		for (int j = 0; j < n; j++)
			if ((arr[j] & (1 << i)))
				count++;
		ans = (count * (n - count) * 2) + ans;
	}
	return ans;
}

int main(){
    int a[] = {1,3,5};
    int n = sizeof(a)/sizeof(int);
    // sumBitDifferences(a,n);
    long long ans = sumBitDifferences(a,n);
    cout << ans;
    return 0;
}