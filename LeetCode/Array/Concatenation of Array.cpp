#include <bits/stdc++.h>
using namespace std;
#define ll long long int
  vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        vector <int> v(nums);
        for(auto i:nums){
            v.push_back(i);
        }
        return v;
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
