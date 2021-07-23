#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int arrayPairSum(vector<int>& nums) {
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i=i+2){
            ans+=min(nums[i],nums[i+1]);
        }    
    return ans;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
