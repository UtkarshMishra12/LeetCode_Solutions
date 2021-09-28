#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int binaryGap(int n) {
        int lastone = 32;
        int ans = 0;
        for(int i=0;i<32;i++){
            if(n&(1<<i)){
                ans = max(ans,i-lastone);
                lastone = i;
            }
        }
        return ans;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 