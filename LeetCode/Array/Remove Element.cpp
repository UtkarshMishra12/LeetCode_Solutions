#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] != val) {
               nums[i] = nums[j];
               i++;
            }
        }   
    return i;
}
int main() {
    //Call Fun
	// your code goes here
	return 0;
}
