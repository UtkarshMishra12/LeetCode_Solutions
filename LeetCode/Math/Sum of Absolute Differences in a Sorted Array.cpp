#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 vector<int> getSumAbsoluteDifferences(vector<int>& nums) {
        int n=nums.size();
        vector<int>res(n,0);

        for(int  i=0;i<n;i++)
            res[0]+=nums[i]-nums[0];
        
        for(int i=1;i<n;i++){
            int before=i,after=n-i;
            res[i]+=res[i-1]+before*(nums[i]-nums[i-1]) - after*(nums[i]-nums[i-1]);
        }
        return res;
    }
int main() {
   
	// your code goes here
	return 0;
}
 