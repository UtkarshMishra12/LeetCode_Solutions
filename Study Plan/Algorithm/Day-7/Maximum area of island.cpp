#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int

 int dfs(vector<vector<int>> &grid,int i,int j,vector<vector<bool>> &visited)
    {
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size())
        return 0;
        if(visited[i][j]==true)
        return 0;
        if(grid[i][j]==0)
        return 0;
        visited[i][j]=true;
       return (1+dfs(grid,i+1,j,visited)+dfs(grid,i,j+1,visited)+dfs(grid,i-1,j,visited)+dfs(grid,i,j-1,visited));
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<bool>> visited(n,vector<bool> (m,false));
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1&&visited[i][j]==false)
                {    
                   maxi=max(maxi,dfs(grid,i,j,visited));
                }   
            }   
        }
        return maxi;
    }

int main() {
    //Call Func
	// your code goes here
	return 0;
}
 