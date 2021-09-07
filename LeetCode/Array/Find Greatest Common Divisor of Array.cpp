#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 
    int gcd(int a ,int b){
        if(b==0){
            return a;
        }
        else 
            return gcd(b,a%b);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int b=nums[nums.size()-1];
        
        return gcd(a,b);
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 