#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

  priority_queue<int,vector<int>,greater<int>>q;
    int size;
    KthLargest(int k, vector<int>& nums) { 
        size=k;
        for(auto c:nums)
        {
            q.push(c);
            if(q.size() > k) q.pop();
        }
    }
    
    int add(int val) {
        q.push(val);
        if(q.size() > size) q.pop();
        return q.top();
    }

int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 