#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int searchInsert(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
    return s;
}
int main() {
    vector <int> v={1,2,3,4,5};
    int k;cin>>k;
    cout<<searchInsert(v,k);
	// your code goes here
	return 0;
}
