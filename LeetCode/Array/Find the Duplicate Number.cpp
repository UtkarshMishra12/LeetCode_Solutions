#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int findDuplicate(vector<int>& nums) {
        /*unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second>1){
                return i.first;
            }
        }
        return 0;*/
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
        }
    return 0;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
