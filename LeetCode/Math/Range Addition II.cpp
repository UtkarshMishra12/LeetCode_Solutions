#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_row = m;
        int min_col = n;
        for (int i=0; i<ops.size(); i++){
            if (ops[i][0]<min_row) min_row=ops[i][0];
            if (ops[i][1]<min_col) min_col=ops[i][1];
        }        
        return min_row*min_col;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 