#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int arithmeticSlices(vector <int> &nums){
    int n=nums.size();
    vector <int> dp(n,0);
    int ans=0;
    for(int i=2;i<n;i++){
        //1 2 3 4 5 ->3
        if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2]){
            dp[i]=dp[i-1]+1;
            ans+=dp[i];
        }
    }
    return ans;
}

int main() {
    vector <int> v={1,2,3,4};
    cout<<arithmeticSlices(v);
    
    //Call Func
	// your code goes here
	return 0;
}
 