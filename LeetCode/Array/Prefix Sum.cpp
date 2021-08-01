#include <bits/stdc++.h>
using namespace std;
#define ll long long int
 vector<int> runningSum(vector<int>& nums) {
        /*int n=nums.size();
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        return nums;*/
        int n=nums.size();
        vector <int> v(n,0);
        v[0]=nums[0];
        for(int i=1;i<n;i++){
            v[i]=v[i-1]+nums[i];
        }
    return v;
} 
int main() {
    //Call Func
	// your code goes here
	return 0;
}
