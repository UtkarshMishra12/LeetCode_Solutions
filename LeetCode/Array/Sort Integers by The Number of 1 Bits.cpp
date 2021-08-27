#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

vector<int> sortByBits(vector<int>& v) {
        sort(begin(v), end(v), [&](int a, int b) {
            int x=bitset<32>(a).count();
            int y=bitset<32>(b).count();
            return x!=y ? x<y : a<b;
        });
        return v;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 