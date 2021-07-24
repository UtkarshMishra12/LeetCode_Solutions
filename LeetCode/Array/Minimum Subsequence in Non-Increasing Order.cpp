#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int total=0,sum=0;
        for(auto i:nums){
            total+=i;
        }
        vector <int>v;
        for(int i=nums.size()-1;i>=0;i--){
            v.push_back(nums[i]);
            sum+=nums[i];
            if(sum>total-sum){
                break;
            }
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
