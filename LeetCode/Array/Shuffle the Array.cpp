#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> shuffle(vector<int>& nums, int n) {
        int i=0;
        int j=n;
        vector<int> v;
        for(int k=0;k<n;k++){
            v.push_back(nums[i++]);
            v.push_back(nums[j++]);
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
