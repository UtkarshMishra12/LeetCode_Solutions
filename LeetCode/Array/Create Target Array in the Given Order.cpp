#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector <int> v;
        for(int i=0;i<nums.size();i++){
            v.insert(v.begin() + index[i], nums[i]);
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
