#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

bool judgeSquareSum(int c) {
        size_t hi = (int)sqrt(c), lo = 0;
        
        while (lo <= hi) {
            int curr = lo * lo + hi * hi;
            if (curr == c) return true;
            else if (curr < c) lo++;
            else hi--;
        }
        return false;
    
}

int main() {
    cout<<judgeSquareSum(100000000000);
	// your code goes here
	return 0;
}
 