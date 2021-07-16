#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int getMinDistance(vector<int>& nums, int target, int start) {
        int n=nums.size();
        int mine=INT_MAX;
        for(int i=0;i<n;i++){
            if(nums[i]==target){
               int c=abs(i-start);
               mine=min(c,mine);
            }
        }
    return mine;
}
int main() {
    
	// your code goes here
	return 0;
}
