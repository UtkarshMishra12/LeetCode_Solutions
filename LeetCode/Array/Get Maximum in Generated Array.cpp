#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int getMaximumGenerated(int n) {
        int dp[102] = {0, 1};
        for(int i=1; i<(n/2)+1; i++){
            dp[2*i] = dp[i];      
            dp[(2*i)+1] = dp[i]+ dp[i+1];
        }
        int maxG{0};
        for(int i=0; i<=n; i++){
            maxG = max(maxG, dp[i]);
        }
        return maxG;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 