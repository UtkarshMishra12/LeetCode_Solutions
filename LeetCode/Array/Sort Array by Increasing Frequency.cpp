#include <bits/stdc++.h>
using namespace std;
#define ll long long int
bool static comp(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second)
        return a>b;   
        else
        return a.second<b.second;
    }
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        
        vector <pair<int,int>> v;
        for(auto i:m){
            v.push_back(i);
        }
        
        sort(v.begin(),v.end(),comp);
        
        vector <int> ans;
        for(auto i:v){
            while(i.second>0){
                ans.push_back(i.first);
                i.second--;
            }    
        }
        return ans;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
