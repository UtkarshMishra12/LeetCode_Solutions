#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end(), greater<int>() );
    return nums[k-1];
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
