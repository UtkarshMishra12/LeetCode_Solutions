#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> 
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> pbds;
#define ll long long int


void dfs(vector<vector<int>>& image,int i,int j,int new1,int n,int m,int c0){
        if(i>=n||j>=m||i<0||j<0||image[i][j]==new1||image[i][j]!=c0){
            return ;
        }
        image[i][j]=new1;
         dfs(image,i+1,j,new1,n,m,c0);
         dfs(image,i,j+1,new1,n,m,c0);
         dfs(image,i-1,j,new1,n,m,c0);
         dfs(image,i,j-1,new1,n,m,c0);
             
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        //vector<vector<int>>& v;
        int n=image.size(),m=image[0].size();
        int i=sr,j=sc;
        if(image[i][j]!=newColor){
            dfs(image,i,j,newColor,n,m,image[sr][sc]);
        }
        return image;
    } 

int main() {
    
    //Call Func
	// your code goes here
	return 0;
}
 