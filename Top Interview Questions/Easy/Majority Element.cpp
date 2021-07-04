#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int majorityElement(vector<int>& nums) {
    unordered_map <int,int> mp;
        
    for(auto i:nums){
        mp[i]++;
    }
    int k=nums.size();
    int n=k/2;
    int p=0;
    for(auto it:mp){
        if(it.second >n){
            p=it.first;
            break;
        }
    }
    return p;
}
int main() {
    vector <int> v={2,2,1,1,1,2,2};
    cout<<majorityElement(v);
	// your code goes here
	return 0;
}
