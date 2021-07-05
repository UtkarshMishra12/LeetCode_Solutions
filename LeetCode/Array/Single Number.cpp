#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int singleNumber(vector<int>& nums) {
    unordered_map <int,int> mp;
        
    for(auto i: nums){
        mp[i]++;
    }
    int p=0;
    for(auto it:mp){
        if(it.second==1){
            p= it.first;
            break;
        }
    }
    return p;
}
int main() {
    vector <int> v={2,1,2};
    cout<<singleNumber(v);
	// your code goes here
	return 0;
}
