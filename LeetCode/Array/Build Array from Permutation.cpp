#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int> buildArray(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            ans.push_back(nums[nums[i]]);
        }
    return ans;
}
int main() {
    
	// your code goes here
	return 0;
}
