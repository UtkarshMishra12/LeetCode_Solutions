#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int singleNonDuplicate(vector<int>& nums) {
        /*map <int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second==1){
                return i.first;
            }
        }
        return -1;*/
        int low = 0; int high = nums.size()-2;
    
        while(low<=high){
            int mid = low+(high-low)/2;
            
            if(nums[mid]==nums[mid^1])
                low = mid+1;
            else high = mid-1;
            
        }
    return nums[low];
    
        
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
