#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                return true;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    return false;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
