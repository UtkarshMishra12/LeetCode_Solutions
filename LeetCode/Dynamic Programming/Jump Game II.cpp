#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 int min_jump(vector <int> &v,int n, vector <int> &dp ,int i){
        if(i==n-1){
            return 0;
        }
        if(i>=n){
            return INT_MAX;
        }
        if(dp[i]!=0){
            return dp[i];
        }
        
        int steps=INT_MAX;
        int max_jump=v[i];
        for(int jump=1;jump<=max_jump;jump++){
            int next_cell=i+jump;
            int subprob= min_jump(v,n,dp,next_cell);
            if(subprob!=INT_MAX){
                steps=min(steps,subprob+1);
            }
        }
        return dp[i]=steps;
    }
    
    int jump(vector<int>& nums) {
        int n=nums.size();
        vector <int> dp(n,0);
        
        return min_jump(nums,n,dp,0);
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
