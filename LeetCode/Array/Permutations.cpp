#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


 vector<vector<int>> permute(vector<int>& nums) {
         vector<vector<int>> ans;
		 sort(nums.begin(),nums.end());
         do{
            ans.push_back(nums);
         }
            while (next_permutation(nums.begin(),nums.end()));
     
        return ans;
    }
    
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 