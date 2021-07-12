#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int k=n/3;
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        vector <int> v;
        for(auto i:m){
            if(i.second >k){
                v.push_back(i.first);
            }
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
