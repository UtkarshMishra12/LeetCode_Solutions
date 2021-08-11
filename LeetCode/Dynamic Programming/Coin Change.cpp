#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int coinChange(vector<int>& coins, int m) {
        vector <int> dp(m+1,0);
        dp[0]=0;
        
        for(int i=1;i<=m;i++){
            dp[i]=INT_MAX;
            for(auto c:coins){
                if(i-c>=0 && dp[i-c]!=INT_MAX){
                    dp[i]=min(dp[i],dp[i-c]+1);
                }
            }
        }
        return dp[m]==INT_MAX?-1 :dp[m];
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
