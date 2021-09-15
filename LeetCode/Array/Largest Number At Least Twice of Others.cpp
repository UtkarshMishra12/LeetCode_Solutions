#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

int dominantIndex(vector<int>& nums) {
        priority_queue<int>pq(nums.begin(),nums.end());
        int large=pq.top();
        pq.pop();
        while(!pq.empty()){
            if(pq.top()!=0){
            if(large/pq.top()<2)
                return -1;
            }
            pq.pop();
        }
        auto it = find(nums.begin(),nums.end(),large);
        return it-nums.begin();
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 