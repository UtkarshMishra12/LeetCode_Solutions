#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


 int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> pq;
        for(auto i:stones){
            pq.push(i);
        }
        
        while(pq.size()>1){
            int t=pq.top();
            pq.pop();
            
            int s=pq.top();
            pq.pop();
            
            int l=abs(s-t);
            pq.push(l);
        }
        return pq.top();
    }
int main() {
    //Call Func
	// your code goes here
	return 0;
}
 