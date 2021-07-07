#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
    map<int, int>m;
    for(auto i:nums)
        m[i]++;
    for(int i=1;i<=nums.size();i++){
        if(m.find(i)==m.end())
            ans.push_back(i);
    }
        
    return ans; 
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
