#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool containsDuplicate(vector<int>& nums) {
    unordered_map<int, int> mp;
    for(auto i :nums){
        mp[i]++;
    }    
    
    for(auto it : mp){
        if(it.second > 1){
            return true;
        }    
    }
    return false;
}    
int main() {
    vector <int> v={0,1,-2,3,4};
    cout<<containsDuplicate(v);
	// your code goes here
	return 0;
}
