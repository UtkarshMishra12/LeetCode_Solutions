#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

   void rotate(vector<int>& nums, int k) {
        /*int n=nums.size();
        vector <int> v(n,0);
        for(int i=0;i<n;i++){
            v[(i+k)%n]=nums[i];
        }
        for(int i=0;i<n;i++){
            nums[i]=v[i];
        }*/
        k %= nums.size();
        std::rotate(nums.rbegin(),nums.rbegin()+k,nums.rend());
    }
int main() {
   
	// your code goes here
	return 0;
}
 