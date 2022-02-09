#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int findPairs(vector<int>& nums, int k) {
       int n= nums.size();
        int count=0;
        sort(nums.begin(), nums.end());
        set<vector<int>>res;
        
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                if(abs(nums[i]-nums[j])==k)
                    res.insert({nums[i], nums[j]});
            }
        }
        count = res.size();
        return count;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 