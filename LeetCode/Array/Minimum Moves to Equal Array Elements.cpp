#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int minMoves(vector<int>& nums) {
        int sum=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            sum+=nums[i]-nums[0];
        }
    return sum;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
