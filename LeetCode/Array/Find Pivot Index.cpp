#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int pivotIndex(vector<int>& nums) {
        int sum=0,lfsum=0;
        for(auto i:nums){
            sum+=i;
        }
        for(int i=0;i<nums.size();i++){
            if(lfsum == sum-lfsum-nums[i]){
                return i;
            }
            lfsum+=nums[i];
        }
    return -1;
}
int main() {
    
	// your code goes here
	return 0;
}
