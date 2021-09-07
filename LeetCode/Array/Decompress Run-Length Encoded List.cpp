#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> ans;
		int n = nums.size();
		for (int i = 0; i < n; i += 2){
			while (nums[i]--){
				ans.push_back(nums[i + 1]);
			}
		}
		return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 