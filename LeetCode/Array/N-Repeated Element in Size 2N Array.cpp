#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int repeatedNTimes(vector<int>& nums) {
        int a=nums.size()/2;
        map<int,int> m;
        for(auto i:nums){
            m[i]++;
        }
        for(auto i:m){
            if(i.second==a){
                return i.first;
            }
        }
    return -1;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
