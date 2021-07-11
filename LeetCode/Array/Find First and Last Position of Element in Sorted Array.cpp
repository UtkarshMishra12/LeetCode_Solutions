#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int lowerbound(vector <int> nums, int key){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==key){
                ans=mid;
                e=mid-1;
            }
            else if(nums[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector <int> nums, int key){
        int s=0;
        int e=nums.size()-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==key){
                s=mid+1;
                ans=mid;
            }
            else if(nums[mid]>key){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int key) {
        vector <int> v;
        int l=lowerbound(nums,key);
        int u=upperbound(nums,key);
        v.push_back(l);
        v.push_back(u);
        return v;
   }
int main() {
    /*vector <int> v={1,2,3,4,4,4,5,6};
    int key=4;
    vector<int>::iterator l,h;
    l=lower_bound(v.begin(),v.end(),key);
    h=upper_bound(v.begin(),v.end(), key);
    cout<<h-l;*/
    //Call Func
	// your code goes here
	return 0;
}
