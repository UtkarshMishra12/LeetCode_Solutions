#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

bool kLengthApart(vector<int>& nums, int k) {
        int count=k;
        for(auto i:nums){
            if(i==1){
                if(count<k){
                    return false;
                }
                count=0;
            }
            else{
                count++;
            }
        }
        return true;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 