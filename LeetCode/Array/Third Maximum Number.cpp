#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());    
        nums.erase(unique(nums.begin(), nums.end()), nums.end());   
        if(nums.size()<3)
           return nums[nums.size()-1];
        else
            return nums[nums.size()-3];
    
       }

int main() {
   
	// your code goes here
	return 0;
}
 