#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 bool increasingTriplet(vector<int>& a) {
        /*int n=nums.size();
        if(n<3){
            return false;
        }
        for(int i=0;i<n-2;i++){
            if(nums[i]<nums[i+1] && nums[i+1]<nums[i+2]){
                return true;
            }
        }
        return false;*/
        int small = INT_MAX, big = INT_MAX;
        for(int i : a){
            if(i<=small) small = i;
            else if(i<=big) big = i;
            else return true;
        }
        return false;
        
        // 74 TEST CASE PASSED / 76
        /*int n=nums.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                if(nums[i]<nums[j]){
                    for(int k=0;k<n;k++){
                        if(nums[j]<nums[k]){
                            return true;
                        }
                    }
                }
            }
        }
        return false;*/
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 