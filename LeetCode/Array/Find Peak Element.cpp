#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
    return v[n-1].second;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
