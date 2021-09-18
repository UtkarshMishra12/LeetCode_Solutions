#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        
        for(int i=0;i<nums.size();i++){
           if(mp.find(nums[i])!=mp.end() && abs(i-mp[nums[i]])<=k)
               return true;
           else
               mp[nums[i]]=i;
        }
       return false;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 