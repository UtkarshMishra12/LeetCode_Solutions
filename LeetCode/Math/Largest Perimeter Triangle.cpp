#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int i=nums.size()-3;i>=0;i--){
            if(nums[i]+nums[i+1] > nums[i+2]){
                return nums[i]+nums[i+1]+nums[i+2];
            }
        }
        return 0;
    }
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
