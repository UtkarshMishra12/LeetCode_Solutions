#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int minMoves2(vector<int>& nums) {
        int c=0;
        sort(nums.begin(),nums.end());
        int mid=nums.size()/2;
        for(int i=0;i<nums.size();i++){
            c+=abs(nums[i]-nums[mid]);
        }
    return c;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
