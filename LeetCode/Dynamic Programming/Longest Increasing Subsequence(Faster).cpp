#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int lengthOfLIS(vector<int>& nums) {
        /*int n=nums.size();
        vector <int> dp(n,1);
        
        int len=1;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    dp[i]=max(dp[i],1+dp[j]);
                    len=max(dp[i],len);
                }
            }
        }
        return len;*/
        vector<int> dp;
        
        for(int i:nums){
            int pos = lower_bound(dp.begin(),dp.end(),i)-dp.begin();
            if(pos==dp.size())
                dp.push_back(i);
            else 
                dp[pos] = i;
        }
        return dp.size();
    }
int main() {
    vector <int> v{10,9,2,5,3,7,101,18};
    cout<<lis(v)<<endl;
	// your code goes here
	return 0;
}
