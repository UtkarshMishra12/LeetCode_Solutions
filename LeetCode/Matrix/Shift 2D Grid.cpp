#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int
#define pb push_back

 vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n,vector<int>(m));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                
                int newJ=(j+k)%m; 
                
                int newI=(i+(j+k)/m)%n; 
                
                ans[newI][newJ]=grid[i][j];
            }
        }
        return ans;
    }
int main() {

    
    //Call Func
	// your code goes here
	return 0;
}
 