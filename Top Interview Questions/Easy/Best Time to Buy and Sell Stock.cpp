#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minprice)
                minprice = prices[i];
            else if (prices[i] - minprice > maxprofit)
                maxprofit = prices[i] - minprice;
        }
    return maxprofit;
}
int main() {
    vector <int> v={7,1,5,3,6,4};
    cout<<maxProfit(v);
	// your code goes here
	return 0;
}
