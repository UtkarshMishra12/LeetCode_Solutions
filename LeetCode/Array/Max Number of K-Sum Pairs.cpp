#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        
        int i=0,j=nums.size()-1;
        
        int ans=0;
        
        
        while(i<j){
            
            if(nums[i] + nums[j]==k){
                ans+=1;
                i++;
                j--;
            }
            else if(nums[i] + nums[j] >k){
                j--;
            }
            else{
                i++;
            }
        }
        
     return ans;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
