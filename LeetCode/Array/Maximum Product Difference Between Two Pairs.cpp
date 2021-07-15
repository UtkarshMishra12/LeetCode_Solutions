#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        return nums[n-1]*nums[n-2] - nums[0]*nums[1];
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
