#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int specialArray(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      for(int x=1;x<=nums.size();x++){
        int c=0;
        for(int j=nums.size()-1;j>=0;j--){
            if(nums[j]>=x)
            c++;
        }
        if(c==x)
        return x;    
       }
      return -1;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 