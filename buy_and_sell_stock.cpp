#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void find_max_profit(vector<int> &a, int i, int &minPrice, int &maxProfit)
{
    if (i == a.size())
        return;

    if (a[i] < minPrice)
        minPrice = a[i];

    int Current_day_profit = a[i] - minPrice;

    if (Current_day_profit > maxProfit)
        maxProfit = Current_day_profit;

    find_max_profit(a, ++i, minPrice, maxProfit);
}

int main()
{
    vector<int> a{7, 6, 4, 3, 1};
    int minPrice = INT_MAX;
    int maxProfit = INT_MIN;
    int i = 0;
    find_max_profit(a, i, minPrice, maxProfit);

    cout << maxProfit << endl;
    return 0;
}