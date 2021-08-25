#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 vector<int> sortedSquares(vector<int>& nums) {
        /*vector <int> v;
        for(auto i:nums){
            v.push_back(i*i);
        }
        sort(v.begin(),v.end());
        return v;*/
        int n=nums.size();
        vector <int> v(n,0);
        int i=0,j=n-1,k=n-1;
        while(i<=j){
            if(abs(nums[i]) < abs(nums[j])){
                v[k--]=nums[j]*nums[j];
                j--;
            }
            else{
                v[k--]=nums[i]*nums[i];
                i++;
            }
        }
    return v;
}
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 