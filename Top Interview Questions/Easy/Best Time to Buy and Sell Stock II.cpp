#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maxProfit(vector<int>& prices) {
       int maxprofit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > prices[i - 1])
                maxprofit += prices[i] - prices[i - 1];
        }
    return maxprofit; 
}
int main() {
    vector <int> v={7,1,5,3,6,4};
    cout<<maxProfit(v);
	// your code goes here
	return 0;
}
