#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int rob(vector<int>& nums) {
        int n=nums.size();
        vector <int> dp(n+1,0);
        if(n==1){
            return max(0,nums[0]);
        }
        if(n==2){
            return max(0,max(nums[0],nums[1]));
        }
        dp[0]=max(0,nums[0]);
        dp[1]=max(0,max(nums[0],nums[1]));
        for(int i=2;i<n;i++){
            int inc= nums[i]+dp[i-2];
            int exc= dp[i-1];
            dp[i]=max(inc,exc);
        }
    return dp[n-1];
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
