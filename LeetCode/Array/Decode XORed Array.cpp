#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 vector<int> decode(vector<int>& encoded, int first) {
        vector<int> ans(encoded.size()+1);
        ans[0]=first;
        for(int i=1;i<encoded.size()+1;i++){
            ans[i] = encoded[i-1]^ans[i-1]; 
        }    
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 