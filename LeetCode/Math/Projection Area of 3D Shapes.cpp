#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

int projectionArea(vector<vector<int>>& grid) {
        int base = 0, maxRow = 0;
        vector<int> maxCol(grid[0].size());
        
        for(int i=0; i<grid.size(); ++i) {
            for(int k=0; k<grid[0].size(); ++k) {
                if(grid[i][k]) {
                    ++base;
                    maxRow = max(maxRow, grid[i][k]);
                    maxCol[k] = max(maxCol[k], grid[i][k]);
                }
            }
            base += maxRow;
            maxRow = 0;
        }
        
        return base + accumulate(maxCol.begin(),maxCol.end(),0);
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 