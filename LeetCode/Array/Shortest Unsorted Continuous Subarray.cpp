#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

    int findUnsortedSubarray(vector<int>& nums) {
        int end=-1;
        int max=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<max){
                end=i;
            }
            else{
                max=nums[i];
            }
        }
        
        int st=0;
        int min=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]>min){
                st=i;
            }
            else{
                min=nums[i];
            }
        }
        return end-st+1;
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 