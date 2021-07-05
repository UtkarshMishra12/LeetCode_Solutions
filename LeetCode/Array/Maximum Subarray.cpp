#include <bits/stdc++.h>
using namespace std;
#define ll long long int

 int maxSubArray(vector<int>& nums) {
    int cursum=0;
    int maxsum=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        cursum=cursum+nums[i];
        if(cursum>maxsum){
            maxsum=cursum;
        }
        if(cursum<0){
            cursum=0;
        }
    }
        return maxsum;
        
    }
int main() {
    int n;cin>>n;
    vector <int> v;
    for(ll i=0;i<n;i++){
        int a;cin>>a;
        v.push_back(a);
    }
    cout<<maxSubArray(v);
	// your code goes here
	return 0;
}
