#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool canJump(vector<int>& nums) {
        int cur = 0, des = nums.size() - 1;
        for (int i = 0; i < nums.size(); i++) {
            if (cur < i) {
                return false;
            }
            cur = max(cur, i + nums[i]);
        }
        return cur >= des;
    }
int main() {
    
	// your code goes here
	return 0;
}
