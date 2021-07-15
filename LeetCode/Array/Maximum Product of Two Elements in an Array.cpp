#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int maxProduct(vector<int>& nums) {
        /*sort(nums.begin(),nums.end());
        int n=nums.size();
        return (nums[n-1]-1)*(nums[n-2]-1);*/
        priority_queue <int> pq;
        for(auto i:nums){
            pq.push(i);
        }
        int a=pq.top();
        pq.pop();
        
        int b=pq.top();
        pq.pop();
        
    return (a-1)*(b-1);
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
