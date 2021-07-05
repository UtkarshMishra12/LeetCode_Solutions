#include <bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
    return nums;
} 
int main() {
    vector <int> v={1,2,3};
	// your code goes here
	return 0;
}
