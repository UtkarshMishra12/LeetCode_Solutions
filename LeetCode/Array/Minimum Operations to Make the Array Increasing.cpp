#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


 int minOperations(vector<int>& nums) {
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                ans+=(nums[i-1]-nums[i]+1);
                nums[i]=nums[i-1]+1;
            }
        }
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 