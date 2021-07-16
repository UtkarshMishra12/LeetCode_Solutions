#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int findSpecialInteger(vector<int>& arr) {
        unordered_map<int,int> m;
        for(auto i:arr){
            m[i]++;
        }
        int ans=0,occ=0;
        for(auto i:m){
            if(i.second>occ){
                ans=i.first;
                occ=i.second;
            }
        }
    return ans;
}
int main() {
    
	// your code goes here
	return 0;
}
